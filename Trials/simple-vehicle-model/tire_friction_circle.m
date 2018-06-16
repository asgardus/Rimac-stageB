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
    figure(i);
    plot(Fx_mat(:,:),Fy_mat(:,:))
end