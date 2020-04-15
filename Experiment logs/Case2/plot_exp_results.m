% Theta response PD, cUDE, cUDE+NE UDE+NE T=0.1
figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 35000;
load UDE_NE.mat;
h1=plot(Log_Theta_Response(1:endtime,1),Log_Theta_Response(1:endtime,4),'b','LineWidth',1.5);
hold on;
load PD.mat;
h2=plot(Log_Theta_Response(1:endtime,1),Log_Theta_Response(1:endtime,4),'g','LineWidth',1.5);
hold on;
load cUDE.mat;
h3=plot(Log_Theta_Response(1:endtime,1),Log_Theta_Response(1:endtime,4),'r','LineWidth',1.5);
hold on;
h4=plot(Log_Theta_Response(1:250:endtime,1),Log_Theta_Response(1:250:endtime,2),'--k','LineWidth',1.5);
set(gca,'child',[h4 h3 h1 h2]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
ylim([-0.05 0.45]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\theta$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3, h4];
l=legend(H,'The proposed NE+UDE-based control','PD control','Classic UDE-based control','Reference','Location','northeast');
set(l,'Fontsize',12);


% Theta tracking err  PD, cUDE, cUDE+NE UDE+NE T=0.1
figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 35000;
load UDE_NE.mat;
h1=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'b','LineWidth',1.5);
hold on;
load PD.mat;
h2=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'g','LineWidth',1.5);
hold on;
load cUDE.mat;
h3=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'r','LineWidth',1.5);
hold on;
set(gca,'child',[h1 h3 h2]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
% ylim([-0.02 0.03]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\tilde{\theta}$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3];
l=legend(H,'The proposed NE+UDE-based control','PD control','Classic UDE-based control','Location','northeast');
set(l,'Fontsize',12);



%KF estimation vs real measurements
figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 35000;
load PD.mat;
h1=plot(Log_Theta_w_wo_KF(1:endtime,1),Log_Theta_w_wo_KF(1:endtime,2),'g','LineWidth',1.5);
hold on;
h2=plot(Log_Theta_w_wo_KF(1:250:endtime,1),Log_Theta_w_wo_KF(1:250:endtime,3),'--r','LineWidth',1.5);
set(gca,'child',[h2 h1]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
ylim([-0.05 0.45]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\theta$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2];
l=legend(H,'Encoder measurement','Kalman filter estimation','Location','northeast');
set(l,'Fontsize',12);

figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 35000;
load PD.mat;
h1=plot(Log_Theta_dot_w_wo_KF(1:endtime,1),Log_Theta_dot_w_wo_KF(1:endtime,2),'g','LineWidth',1.5);
hold on;
h2=plot(Log_Theta_dot_w_wo_KF(1:250:endtime,1),Log_Theta_dot_w_wo_KF(1:250:endtime,3),'--r','LineWidth',1.5);
set(gca,'child',[h2 h1]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
ylim([-0.25 0.2]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\dot{\theta}$ $(rad/s)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2];
l=legend(H,'Gyroscope measurement','Kalman filter estimation','Location','northeast');
set(l,'Fontsize',12);


% Input torques
figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 35000;
load UDE_NE.mat;
h1=plot(Log_Input_Torque(1:endtime,1),Log_Input_Torque(1:endtime,2),'b','LineWidth',1.5);
hold on;
load PD.mat;
h2=plot(Log_Input_Torque(1:endtime,1),Log_Input_Torque(1:endtime,2),'g','LineWidth',1.5);
hold on;
load cUDE.mat;
h3=plot(Log_Input_Torque(1:endtime,1),Log_Input_Torque(1:endtime,2),'r','LineWidth',1.5);
set(gca,'child',[h2 h3 h1]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
% ylim([-0.02 0.03]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\tau_p$ $(N \cdot m)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3];
l=legend(H,'The proposed NE+UDE-based control','PD control','Classic UDE-based control','Location','northeast');
set(l,'Fontsize',12);



