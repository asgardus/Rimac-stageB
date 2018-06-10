clc
clear all

%% Parameters

mass=1725;
Jz=1300;
L=1.35+1.15;
lambda=1.35/L;
f=lambda*L;
b=(1-lambda)*L;
C12=90e3;
C34=100e3;
is=12;
vx=20;
delta_ss=0/is*(pi/180);%(-45:1:45)./is*(pi/180);
mu = 0.9;
g = 9.81;
Fz12=mass*g*(1-lambda);
Fz34=mass*g*lambda;
r = linspace(-60,60,20).*pi./180;
v_y = linspace(-40,40,20).*pi./180;
[vy, psidot] = meshgrid(v_y,r);

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
            alpha12 = alpha12_mat(j,k);
            alpha34 = alpha34_mat(j,k);

            if l12 >= 1
                Fy12(j,k) = -C12*tan(alpha12);
            else
                Fy12(j,k) = -C12*tan(alpha12)*l12*(2-l12);
            end

            if l34 >= 1
                Fy34(j,k) = -C34*tan(alpha34);
            else
                Fy34(j,k) = -C34*tan(alpha34)*l34*(2-l34);
            end
        end
    end
    
    %% Coefficients of ODE system
    a1 = -((C12+C34)/mass*vx);
    a2 = (((b*C34-f*C12)/mass*vx)-vx);
    a3 = -(C12*delta)/mass;
    b1 = ((b*C34-f*C12)/(Jz*vx));
    b2 = -((f*f*C12+b*b*C34)/Jz*vx);
    b3 = (f*C12*delta)/mass;

    %% Solving equations for steady state

%     syms x y
%     eqn1 = a1*x + a2*y == -a3;
%     eqn2 = b1*x + b2*y == -b3;
% 
%     sol = solve([eqn1, eqn2], [x, y]);
%     mat(i,1) = sol.x;
%     mat(i,2) = sol.y;
% figure(1);
% plot(delta_ss.*is*180/pi,mat(:,2))

%% ODEs
vydot = (Fy34+Fy12*cos(delta))./mass-psidot*vx; % y-acceleration
psiddot = (f*Fy12*cos(delta)-b*Fy34)/Jz; % Yaw rate angular acceleration
end
% vydot = a1*vy + a2*psidot + a3;
% psiddot = b1*vy + b2*psidot + b3;

%% Phase portrait generation
figure(2);
quiver(vy,psidot,vydot,psiddot)