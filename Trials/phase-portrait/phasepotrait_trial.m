clc;
clear all;

f = @(t,Y) [Y(2); -sin(Y(1))];
r = linspace(-60,60,60).*pi./180;
beta = linspace(-40,40,60).*pi./180;

% creates two matrices one for all the x-values on the grid, and one for
% all the y-values on the grid. Note that x and y are matrices of the same
% size and shape, in this case 20 rows and 20 columns
[x,y] = meshgrid(beta,r);
size(x)
size(y)
%% variables
delta=20*pi/180;
m=1725;
Jz=1300;
a=1.35;
b=1.15;
Cf=75;
Cr=135;
vx=30;
g=9.81;
fzf=m*g*b/(a+b);
fzr=m*g*a/(a+b);
%% computation
x2 = zeros(size(x));%beta
x1 = zeros(size(y));%r
af=atan(x+((a.*y)./vx))-delta;
ar=atan(x-((b.*y)./vx));
fz=fzf;
l=.1;
for i=1:60
    for k=1:60
        a=af(i,k);
sim('MED2018_TireTest_Example.slx')
ff(i,k)=Fy(end);
    end
end
fz=fzr;
for i=1:60
    for k=1:60
        a=ar(i,k);
sim('MED2018_TireTest_Example.slx')
fr(i,k)=Fy(end);
    end
end

x1dot=(1./Jz).*(a.*ff-b.*fr);
x2dot=((ff+fr)-r)./(m*vx);
quiver(x.*180/pi,y.*180/pi,x2dot.*180/pi,x1dot.*180/pi); figure(gcf)
xlabel('\beta')
ylabel('yaw')
hold off
find(x1dot==0)