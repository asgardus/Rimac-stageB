clc
clear all

%% Parameters

sa_mat = (-20:1:20)*pi/180;
m=1300;
L=2.745;
a=1.4;
b=L-a;
vx=10;
r=0.34;         %wheel radius
g=9.81;
fzf=m*g*b/(a+b);
fzr=m*g*a/(a+b);
fz=fzf;

%% Front Axle force curve

lf=0;
w=(vx*(1-lf))/r;
for j=1:length(sa_mat)
    sa = sa_mat(j);
    sim('MED2018_TireTest_Example.slx')
    Fx_mat(1,j) = Fx(end);
    Fy_mat(1,j) = Fy(end);
end

%% Rear Axle force curve

lr=0.5;
fz=fzr;
w=(vx*(1-lr))/r;
for j=1:length(sa_mat)
    sa = sa_mat(j);
    sim('MED2018_TireTest_Example.slx')
    Fx_mat(2,j) = Fx(end);
    Fy_mat(2,j) = Fy(end);
end

%% Plot force curves
figure(1);
plot(sa_mat,Fy_mat(1,:))
hold on
plot(sa_mat,Fy_mat(2,:))