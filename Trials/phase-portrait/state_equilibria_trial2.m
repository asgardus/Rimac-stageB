clc
clear all

%% Parameters

m=1725;
Jz=1300;
L=2.745;
a=1.35;
b=L-a;
C12=90e3;
C34=100e3;
is=12;
g = 9.81;

% states
vx=10;
delta_ss=-15/is*(pi/180);

for i=1:length(delta_ss)
    delta = delta_ss(i);
    load('modelfitspoly5.mat')

    %% Solving equations for steady state
    % x(1)=beta; x(2)=psidot; x(3)=Fx34;
    syms x1 x2
    
    a12 = (x1 + (a*x2/vx) - delta);
    a34 = (x1 - b*x2/vx);
    x_mat = [a12^5;a12^4;a12^3;a12^2;a12^1;1];%[a12^7;a12^6;a12^5;a12^4;a12^3;a12^2;a12^1;1];
    x1_mat = [a34^5;a34^4;a34^3;a34^2;a34^1;1];%[a34^7;a34^6;a34^5;a34^4;a34^3;a34^2;a34^1;1];
    Fy12 = fitpoly5.coeff(1,3:6)*x_mat(3:6);
    Fy34 = fit1poly5.coeff(1,3:6)*x1_mat(3:6);
    
    eqn1 = (Fy34+Fy12*cos(delta))/(m*vx)-x2 == 0; % y-acceleration
    eqn2 = (a*Fy12*cos(delta)-b*Fy34)/Jz == 0; % Yaw rate angular acceleration
%     eqn3 = (x3-Fy12*sin(delta)/m)+ x1*x2*vx == 0; % Rear Tire forces
    
    [sol_x, sol_y] = vpasolve(eqn1,[x1,x2]);
end

%% Plot Equilibria
% figure(1);
% plot(delta_ss.*is*180/pi,x(:,2))