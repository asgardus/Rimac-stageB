% SIMPLE VEHICLE MODEL PARAMETERS

g             = 9.81;
h             = 0.35;      % CoG Height
m             = 1400;      % Vehicle Mass
lf            = 1.4;       % CoG to Front Axle
lr            = 1.345;     % CoG to Rear Axle
tf            = 1.7/2;     % Front Track Width
tr            = 1.684/2;   % Rear Track Width
Izz           = 1800;      % Yaw Moment of Inertia
r             = 0.34;      % Tire Radius
v_init        = 60*5/18;   % Initial Longitudinal Velocity
steering_Gain = 12;        % Gain from wheel angle to steering wheel angle