clc
clear all

r = linspace(-4.5,4.5,40);
beta = linspace(-80,80,40)*pi/180;

% creates two matrices one for all the x-values on the grid, and one for
% all the y-values on the grid. Note that x and y are matrices of the same
% size and shape, in this case 20 rows and 20 columns
%% variables
delta=-20*pi/180;
m=1725;
Jz=1300;
a=1.35;
b=1.15;
vx=10;
g=9.81;
fzf=m*g*b/(a+b);
fzr=m*g*a/(a+b);
%% computation
[x,y] = meshgrid(beta,r);
[m1,n1] = size(x);[m2,n2] = size(y);
% x = vx*tan(x1*pi/180);
af=atan(tan(x)+((a*y)/vx)-delta);
ar=atan(tan(x)-((b*y)/vx));
fz=fzf;
l=0.1;
for i=1:m1
    for k=1:n2
        a=af(i,k);
        sim('MED2018_TireTest_Example.slx')
        ff(i,k)=Fy(end);
    end
end
fz=fzr;
for i=1:m1
    for k=1:n2
        a=ar(i,k);
        sim('MED2018_TireTest_Example.slx')
        fr(i,k)=Fy(end);
    end
 end
% ay=(ff+fr)./m;
% mz=(a.*ff-b.*fr)./(m*(a+b));
% plot(ay,mz)
x1dot=(ff*cos(delta)+fr)./(m*vx)-y;
x2dot=(1/Jz)*(a*ff*cos(delta)-b*fr);

%% plotting
figure(1);
quiver(x,y,x1dot,x2dot); figure(gcf)
xlabel('\beta')
ylabel('yaw')
hold off
% find(x1dot==0)