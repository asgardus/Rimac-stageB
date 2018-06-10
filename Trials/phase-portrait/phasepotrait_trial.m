clc
clear all

r = linspace(-60,60,20).*pi./180;
vy = linspace(-40,40,20).*pi./180;

% creates two matrices one for all the x-values on the grid, and one for
% all the y-values on the grid. Note that x and y are matrices of the same
% size and shape, in this case 20 rows and 20 columns
[x,y] = meshgrid(vy,r);
%% variables
delta=0*pi/180;
m=1725;
Jz=1300;
a=1.35;
b=1.15;
vx=20;
g=9.81;
fzf=m*g*b/(a+b);
fzr=m*g*a/(a+b);
%% computation
x2 = zeros(size(x));%beta
x1 = zeros(size(y));%r
af=atan(((x+a*y)/vx)-delta);
ar=atan((x-b*y)/vx);
fz=fzf;
l=.1;
for i=1:20
    for k=1:20
        a=af(i,k);
sim('MED2018_TireTest_Example.slx')
ff(i,k)=Fy(end);
    end
end
fz=fzr;
for i=1:20
    for k=1:20
        a=ar(i,k);
sim('MED2018_TireTest_Example.slx')
fr(i,k)=Fy(end);
    end
 end
% ay=(ff+fr)./m;
% mz=(a.*ff-b.*fr)./(m*(a+b));
% plot(ay,mz)
x1dot=((ff*cos(delta)+fr)-r)./(m*vx);
x2dot=(1/Jz)*(a*ff*cos(delta)-b*fr);

%% plotting
figure(1);
quiver(x,y,x1dot,x2dot); figure(gcf)
xlabel('v_y')
ylabel('yaw')
hold off
% find(x1dot==0)