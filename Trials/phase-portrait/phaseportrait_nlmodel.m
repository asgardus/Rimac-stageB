clc
clear all

%% Parameters

m=1725;
Jz=1300;
L=1.35+1.15;
lambda=1.35/L;
f=lambda*L;
b=(1-lambda)*L;
C12=90e3;
C34=100e3;
is=12;
vx=15;
delta_ss=(-100:1:100)./is*(pi/180);
mu = 0.9;
g = 9.81;
Fz12=m*g*(1-lambda);
Fz34=m*g*lambda;
% r = linspace(-60,60,20).*pi./180;
% v_y = linspace(-40,40,20).*pi./180;
% [vy, psidot] = meshgrid(v_y,r);

for i=1:length(delta_ss)
    delta = delta_ss(i);
    
    % Slip Angle calculation
    alpha12_mat = atan((vy+psidot*f)/vx) - delta;
    alpha34_mat = atan((vy-psidot*b)/vx);

    % Lambda Calculation
    l12_mat = mu*Fz12./(2*C12*abs(tan(alpha12_mat)));
    l34_mat = mu*Fz34./(2*C34*abs(tan(alpha34_mat)));
    [m,n] = size(l12_mat);
    % Force Calculation based on lambda
    for j=1:m
        for k=1:n
            l12 = l12_mat(j,k);
            l34 = l34_mat(j,k);
            a12 = alpha12_mat(j,k);
            a34 = alpha34_mat(j,k);
        end
    end
    %% Coefficients of ODE system
    

    %% Solving equations for steady state
    
    % betadot = (Fy34+Fy12*cos(delta))/(mass*vx)-psidot; % y-acceleration
    % psiddot = (f*Fy12*cos(delta)-b*Fy34)/Jz; % Yaw rate angular acceleration
    % vxdot = (Fx34-Fy12sin(delta)/mass)+psidot*vx*beta; % Rear Tire forces
end

%% Phase portrait generation
% figure(1);
% plot(delta_ss.*is*180/pi,mat(:,2))