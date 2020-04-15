% Theta dot estimation ADRC(EHGOB), NE, gyro measurement
figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 10000;
load ADRC_eps_002.mat;
h1=plot(Log_ESO(1:endtime,1),Log_ESO(1:endtime,3),'g','LineWidth',1.0);
hold on;
h2=plot(Log_Theta_dot_NE_estimation(1:endtime,1),Log_Theta_dot_NE_estimation(1:endtime,6),'b','LineWidth',1.0);
hold on;
h3=plot(Log_Theta_dot_Response(1:endtime,1),Log_Theta_dot_Response(1:endtime,4),'r','LineWidth',1.0);
% hold on;
% h4=plot(Log_Theta_Response(1:endtime,1),Log_Theta_Response(1:endtime,4),'Color',[1 0.7 0.0],'LineWidth',1.5);
% hold on;
% h5=plot(Log_Theta_Response(1:250:endtime,1),Log_Theta_Response(1:250:endtime,2),'--k','LineWidth',1.5);
set(gca,'child',[h3 h2 h1]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
ylim([-0.3 0.4]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\dot{\theta}$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3];
l=legend(H,'EHGOB estimation from ADRC-based control','Gyroscope measurement corrected by NE','Gyroscope measurement','Location','northeast');
set(l,'Fontsize',12);





% Theta dot estimation ADRC(EHGOB) under different eps
figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 10000;
load ADRC_eps_001.mat;
h1=plot(Log_ESO(1:endtime,1),Log_ESO(1:endtime,3),'g','LineWidth',1.0);
hold on;
load ADRC_eps_002.mat;
h2=plot(Log_ESO(1:endtime,1),Log_ESO(1:endtime,3),'b','LineWidth',1.0);
hold on;
load ADRC_eps_005.mat;
h3=plot(Log_ESO(1:endtime,1),Log_ESO(1:endtime,3),'r','LineWidth',1.0);
% hold on;
% h4=plot(Log_Theta_Response(1:endtime,1),Log_Theta_Response(1:endtime,4),'Color',[1 0.7 0.0],'LineWidth',1.5);
% hold on;
% h5=plot(Log_Theta_Response(1:250:endtime,1),Log_Theta_Response(1:250:endtime,2),'--k','LineWidth',1.5);
set(gca,'child',[h3 h2 h1]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
ylim([-0.3 0.4]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\dot{\theta}$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3];
l=legend(H,'EHGOB estimation $(\varepsilon=0.01)$','EHGOB estimation $(\varepsilon=0.02)$','EHGOB estimation $(\varepsilon=0.05)$','Location','northeast','Interpreter','latex');
set(l,'Fontsize',12);



% Theta dot estimation NE under different Tn
figure;  
width=700;   %宽度，像素数
height=400;   %高度
left=1000;%距屏幕左下角水平距离
bottem=600;%距屏幕左下角垂直距离
set(gcf,'position',[left,bottem,width,height])
endtime = 10000;
load ADRC_eps_002.mat;
h1=plot(Log_Theta_dot_NE_estimation(1:endtime,1),Log_Theta_dot_NE_estimation(1:endtime,8),'g','LineWidth',1.0);
hold on;
h2=plot(Log_Theta_dot_NE_estimation(1:endtime,1),Log_Theta_dot_NE_estimation(1:endtime,6),'b','LineWidth',1.0);
hold on;
h3=plot(Log_Theta_dot_NE_estimation(1:endtime,1),Log_Theta_dot_NE_estimation(1:endtime,4),'r','LineWidth',1.0);
hold on;
h4=plot(Log_Theta_dot_NE_estimation(1:endtime,1),Log_Theta_dot_NE_estimation(1:endtime,2),'Color',[1 0.7 0.0],'LineWidth',1.5);
% hold on;
% h5=plot(Log_Theta_Response(1:250:endtime,1),Log_Theta_Response(1:250:endtime,2),'--k','LineWidth',1.5);
set(gca,'child',[h4 h3 h2 h1]);
grid on;
set(gca,'FontSize',12)%%甚至坐标轴刻度的大小
ylim([-0.3 0.4]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\dot{\theta}$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3, h4];
l=legend(H,'Gyroscope measurement corrected by NE $(T_n=0.05)$','Gyroscope measurement corrected by NE $(T_n=0.1)$','Gyroscope measurement corrected by NE $(T_n=0.2)$','Gyroscope measurement corrected by NE $(T_n=0.5)$','Location','northeast','Interpreter','latex');
set(l,'Fontsize',12);
