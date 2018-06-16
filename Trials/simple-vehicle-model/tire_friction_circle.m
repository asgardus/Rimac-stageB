clc
clear all

m=1300;
g=9.81;
l_mat=-1:0.1:1;
a_mat=(-14:1:14)*pi/180;
fz_mat=0:1000:0.8*m*g;
vx=5;

for i=1:length(fz_mat)
    for j=1:length(l_mat)
        for k=1:length(a_mat)
            fz = fz_mat(i);
            l = l_mat(j);
            a = a_mat(k);
            sim('MED2018_TireTest_Example.slx')
            Fx_mat(j,k) = Fx(end);
            Fy_mat(j,k) = Fy(end);                        
        end
    end
    Fx_axis(1,i)=min(min(Fx_mat));    Fx_axis(2,i)=max(max(Fx_mat));
    Fy_axis(1,i)=min(min(Fy_mat));    Fy_axis(2,i)=max(max(Fy_mat));
    x1=(abs(Fx_axis(1,i))+abs(Fx_axis(1,i)))/2;
    y1=(abs(Fy_axis(1,i))+abs(Fy_axis(1,i)))/2;
    const_Fx(1,i) = x1/fz;
    const_Fy(1,i) = y1/fz;
%     syms x y
%     y=sqrt((y1^2)*(1-(x/x1)^2));
%     figure(i);
%     plot(Fx_mat(:,:),Fy_mat(:,:))
%     hold on
%     fplot(y)
%     hold on
%     fplot(-y)
end