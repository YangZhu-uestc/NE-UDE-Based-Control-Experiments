
%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%




%% Quanser Aero Parameters
% Moment of Inertia of helicopter body (kg-m^2)
L_body = 6.5*0.0254; % length of horizontal body (metal tube)
m_body = 0.094; % mass of horizontal body (metal tube) 
J_body = m_body * L_body^2 / 12; % horizontal cylinder rotating about CM
% 
% Moment of Inertia of yoke fork that rotates about yaw axis (kg-m^2)
m_yoke = 0.526; % mass of entire yoke assembly (kg)
% h_yoke = 9*0.0254; % height of yoke assembly (m)
r_fork = 0.04/2; % radius of each fork (approximated as cylinder)
J_yoke = 0.5*m_yoke*r_fork^2;
% 
% Moment of Inertia from motor + guard assembly about pivot (kg-m^2)
m_prop = 0.43; % mass of dc motor + shield + propeller shield
% m_motor = 0.203; % mass of dc motor
r_prop = 6.25*0.0254; % distance from CM to center of pitch axis
J_prop = m_prop * r_prop^2; % using parallel axis theorem
% 
% Equivalent Moment of Inertia about Pitch and Yaw Axis (kg-m^2)
Jp = J_body + 2*J_prop; % pitch: body and 2 props
Jy = J_body + 2*J_prop + J_yoke; % yaw: body, 2 props, and yoke
%
% Thrust-torque constant (N-m/V) [found experimentally]
Kpp = 0.0011; % (pre-production unit: 0.0015)
Kyy = 0.0022; % (pre-production unit: 0.0040)
Kpy = 0.0021; % thrust acting on pitch from yaw (pre-production unit: 0.0020)
Kyp = -0.0027; % thrust acting on yaw from pitch (pre-production unit: -0.0017)
% 
% Stiffness (N-m/rad)[found experimentally] 
Ksp = 0.037463;
% 
% Viscous damping (N-m-s/rad) [found experimentally]
Dp = 0.0071116; % pitch axis (pre-production unit: Dp = 0.0226) 
Dy = 0.0220; % yaw axis (pre-production unit: Dy = 0.0211)


% %good for const 0.2
Taop = 0.014328655882080;
Ksp = 0.071643279410402;
Kpp = 9.971955650940002e-04;
Dp = 0.007768621416960; 
Vp = 14.368952674523491;

Dp_static = Dp*0.05;
%======================================================
% convert to standard 2-order model
% theta_ddot = -(Ksp/Jp)*theta  -(Dp/Jp)*omega + u + d
% u =  (1/Jp)*taup 
a1=-Ksp/Jp;
a2=-Dp/Jp;


%======================================================
% state-space matrices for pitch channel (yaw locked, yaw motor disabled)
% xp =[theta;theta_dot] Vy==0  yp=[theta;theta_dot]  u=taup
A_p = [0 1;
      a1 a2];
B_p = [0;
     1/Jp];
C_p = [1 0;0 1];
D_p = [0;0];



%% channel selection
% yaw locked, yaw motor disabled
PitchMotorEnable = 1;
PitchAxisEnable = 1;
YawMotorEnable = 0;
YawAxisEnable = 0;



%% controller output feedback gain 
% k1 = 0.1;   % good for 0.2 + 0.05 sint  theta_acc/theta_gyro
% k2 = 0.05;
kp = 5;
kd = 3;

 
% % % % % % % G parameters
% % % % % % % NE and UDE parameters
Tn = 0.1;
Tf = 0.1;
%for comparison: classic UDE
T = Tf;


%% Passivity
T_passive = 0.5;
eps = 0.05;
T_1 = 1/2*eps^2;
T_2 = 3/2*eps;


% % % % % % % vehicle initial conditions
theta_initial = 0.0;   %in rad
theta_dot_initial = 0.0;
psi_initial = 0.0;    %in rad
psi_dot_initial = 0.0;
