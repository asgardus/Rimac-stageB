clc
clear all

initialize_simplemodel;

vx = 10;
delta = 0*pi/180;
psidot_mat = linspace(-4.5,4.5,10);
beta_mat = linspace(-45,45,10)*pi/180;
[x,y]=meshgrid(beta_mat,psidot_mat);
[m,n]=size(x);

for i=1:m
    for j=1:n
        beta = x(i,j);
        psidot = y(i,j);        
        sim('simpleVehicleModel.slx')
        u(i,j)=beta_dot.data(end);
        v(i,j)=psi_ddot.data(end);
    end
end

quiver(x,y,u,v)