clc
clear all

global m Jz a b vx delta fit fit1

%% Parameters

m=1725;
Jz=1300;
L=1.35+1.15;
lambda=1.35/L;
a=lambda*L;
b=(1-lambda)*L;
is=12;
g = 9.81;

% states
vx=10;
delta_ss=(-20:5:20)./is*(pi/180);

% r = linspace(-60,60,20).*pi./180;
% v_y = linspace(-40,40,20).*pi./180;
% [vy, psidot] = meshgrid(v_y,r);

for i=1:length(delta_ss)
    delta = delta_ss(i);
    load('modelfits.mat')

    %% Solving equations for steady state
    fun = @state_equilibria;
    x0 = [0,0,3000];
    x(i,:) = fsolve(fun,x0);
    % betadot = (Fy34+Fy12*cos(delta))/(mass*vx)-psidot; % y-acceleration
    % psiddot = (f*Fy12*cos(delta)-b*Fy34)/Jz; % Yaw rate angular acceleration
    % vxdot = (Fx34-Fy12sin(delta)/mass)+psidot*vx*beta; % Rear Tire forces
end

%% Plot Equilibria
figure(1);
plot(delta_ss.*is*180/pi,x(:,2))