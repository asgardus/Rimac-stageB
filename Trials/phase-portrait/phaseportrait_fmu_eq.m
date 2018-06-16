function F = state_equilibria(x)

global m Jz a b vx delta fit fit1

% x(1)=beta; x(2)=psidot; x(3)=Fx34;
% betadot = (Fy34+Fy12*cos(delta))/(mass*vx)-psidot; % y-acceleration
% psiddot = (f*Fy12*cos(delta)-b*Fy34)/Jz; % Yaw rate angular acceleration
% vxdot = (Fx34-Fy12sin(delta)/mass)+psidot*vx*beta; % Rear Tire forces

% Declarations
% a12 = (x(1) + a*x(2)/vx - delta);
% a34 = (x(1) - b*x(2)/vx);
%     x_mat = [a12^7;a12^6;a12^5;a12^4;a12^3;a12^2;a12^1;1];
%     x1_mat = [a34^7;a34^6;a34^5;a34^4;a34^3;a34^2;a34^1;1];
%     Fy12 = fit1.ceoff*x_mat;
%     Fy34 = fit1.ceoff*x1_mat;
    
% Steady state Equations to solve

F(1) = ((fit1.coeff(1)*(x(1) - b*x(2)/vx)^7+fit1.coeff(2)*(x(1) - b*x(2)/vx)^6+fit1.coeff(3)*(x(1) - b*x(2)/vx)^5+fit1.coeff(4)*(x(1) - b*x(2)/vx)^4+fit1.coeff(5)*(x(1) - b*x(2)/vx)^3+fit1.coeff(6) ...
        *(x(1) - b*x(2)/vx)^2+fit1.coeff(7)*(x(1) - b*x(2)/vx)^1+fit1.coeff(8))+(fit.coeff(1)*(x(1) + a*x(2)/vx - delta)^7+fit.coeff(2)*(x(1) + a*x(2)/vx - delta)^6+fit.coeff(3)*(x(1) + a*x(2)/vx - delta)^5+fit.coeff(4)*(x(1) + a*x(2)/vx - delta)^4 ...
        +fit.coeff(5)*(x(1) + a*x(2)/vx - delta)^3+fit.coeff(6)*(x(1) + a*x(2)/vx - delta)^2+fit.coeff(7)*(x(1) + a*x(2)/vx - delta)^1+fit.coeff(8))*cos(delta))/(m*vx)-x(2); % y-acceleration
F(2) = (a*(fit.coeff(1)*(x(1) + a*x(2)/vx - delta)^7+fit.coeff(2)*(x(1) + a*x(2)/vx - delta)^6+fit.coeff(3)*(x(1) + a*x(2)/vx - delta)^5+fit.coeff(4)*(x(1) + a*x(2)/vx - delta)^4+fit.coeff(5)*(x(1) + a*x(2)/vx - delta)^3+fit.coeff(6)*(x(1) + a*x(2)/vx - delta)^2+...
        fit.coeff(7)*(x(1) + a*x(2)/vx - delta)^1+fit.coeff(8))*cos(delta)-b*(fit1.coeff(1)*(x(1) - b*x(2)/vx)^7+fit1.coeff(2)*(x(1) - b*x(2)/vx)^6+fit1.coeff(3)*(x(1) - b*x(2)/vx)^5+fit1.coeff(4)...
        *(x(1) - b*x(2)/vx)^4+fit1.coeff(5)*(x(1) - b*x(2)/vx)^3+fit1.coeff(6)*(x(1) - b*x(2)/vx)^2+fit1.coeff(7)*(x(1) - b*x(2)/vx)^1+fit1.coeff(8)))/Jz; % Yaw rate angular acceleration
F(3) = ((x(3)-(fit.coeff(1)*(x(1) + a*x(2)/vx - delta)^7+fit.coeff(2)*(x(1) + a*x(2)/vx - delta)^6+fit.coeff(3)*(x(1) + a*x(2)/vx - delta)^5+fit.coeff(4)*(x(1) + a*x(2)/vx - delta)^4+fit.coeff(5)*(x(1) + a*x(2)/vx - delta)^3+fit.coeff(6)...
        *(x(1) + a*x(2)/vx - delta)^2+fit.coeff(7)*(x(1) + a*x(2)/vx - delta)^1+fit.coeff(8))*sin(delta))/m)+ x(2)*vx*x(1); % Rear Tire forces