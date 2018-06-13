clc
clear all

l_mat = 0;
a_mat = (-20:1:20)*pi/180;
m=1300;
L=2.745;
a=1.4;
b=L-a;
vx=16;
r=50;       %radius
yaw=vx/r;   %desired yaw rate(rad/sec)
g=9.81;
fzf=m*g*b/(a+b);
fzr=m*g*a/(a+b);
fz=fzf;
for i=1:length(l_mat)
    l=l_mat(i);
    for j=1:length(a_mat)
        a = a_mat(j);
        sim('MED2018_TireTest_Example.slx')
        Fx_mat(i,j) = Fx(end);
        Fy_mat(i,j) = Fy(end);
    end
    figure(1);
    plot(a_mat,Fy_mat(i,:))
    hold on
end
l_mat=0.5;
fz=fzr;
for i=1:length(l_mat)
    l=l_mat(i);
    for j=1:length(a_mat)
        a = a_mat(j);
        sim('MED2018_TireTest_Example.slx')
        Fx_mat(i,j) = Fx(end);
        Fy_mat(i,j) = Fy(end);
    end
    figure(1);
    plot(a_mat,Fy_mat(i,:))
    hold on
end
