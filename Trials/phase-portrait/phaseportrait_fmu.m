clc
clear all

r = linspace(-4.5,4.5,80);
beta = linspace(-80,80,80)*pi/180;

% creates two matrices one for all the x-values on the grid, and one for
% all the y-values on the grid. Note that x and y are matrices of the same
% size and shape, in this case 20 rows and 20 columns
%% variables
delta_mat = -10;
for c=1:length(delta_mat)
    delta=delta_mat(c)*pi/180;
    m=1400;
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
    l=0;
    for i=1:m1
        for k=1:n2
            a=af(i,k);
            sim('MED2018_TireTest_Example.slx')
            fyf(i,k)=Fy(end);
            fxf(i,k)=Fx(end);
        end
    end
    l=0.6;
    fz=fzr;
    for i=1:m1
        for k=1:n2
            a=ar(i,k);
            sim('MED2018_TireTest_Example.slx')
            fyr(i,k)=Fy(end);
        end
     end
    % ay=(ff+fr)./m;
    % mz=(a.*ff-b.*fr)./(m*(a+b));
    % plot(ay,mz)
    x1dot=(fyf*cos(delta)+fyr)./(m*vx)-y;
    x2dot=(1/Jz)*(a*fyf*cos(delta)-b*fyr);

    %% plotting
    figure(c);
    quiver(x,y,x1dot,x2dot); figure(gcf)
    xlabel('\beta')
    ylabel('yaw')
    hold off
end
% find(x1dot==0)