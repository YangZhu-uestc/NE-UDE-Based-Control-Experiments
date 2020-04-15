

% Theta tracking err  UDE+NE
figure;  
width=700;   %��ȣ�������
height=400;   %�߶�
left=1000;%����Ļ���½�ˮƽ����
bottem=600;%����Ļ���½Ǵ�ֱ����
set(gcf,'position',[left,bottem,width,height])
endtime = 35000;
load UDE_NE_0.5.mat;
h1=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'g','LineWidth',1.5);
hold on;
load UDE_NE_0.2.mat;
h2=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'b','LineWidth',1.5);
hold on;
load UDE_NE_0.1.mat;
h3=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'Color',[1 0.7 0.0],'LineWidth',1.5);
hold on;
load UDE_NE_0.05.mat;
h4=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'r','LineWidth',1.5);
set(gca,'child',[h4 h3 h2 h1]);
grid on;
set(gca,'FontSize',12)%%����������̶ȵĴ�С
ylim([-0.02 0.02]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\tilde{\theta}$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3, h4];
l=legend(H,'$T_n=T_f=0.5$','$T_n=T_f=0.2$','$T_n=T_f=0.1$','$T_n=T_f=0.05$','Location','northeast','Interpreter','latex');
set(l,'Fontsize',12);




% Theta tracking err  UDE
figure;  
width=700;   %��ȣ�������
height=400;   %�߶�
left=1000;%����Ļ���½�ˮƽ����
bottem=600;%����Ļ���½Ǵ�ֱ����
set(gcf,'position',[left,bottem,width,height])
endtime = 35000;
load cUDE_0.5.mat;
h1=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'g','LineWidth',1.5);
hold on;
load cUDE_0.2.mat;
h2=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'b','LineWidth',1.5);
hold on;
load cUDE_0.1.mat;
h3=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'Color',[1 0.7 0.0],'LineWidth',1.5);
hold on;
load cUDE_0.05.mat;
h4=plot(Log_Tracking_Err(1:endtime,1),Log_Tracking_Err(1:endtime,2),'r','LineWidth',1.5);
set(gca,'child',[h4 h3 h2 h1]);
grid on;
set(gca,'FontSize',12)%%����������̶ȵĴ�С
% ylim([-0.05 0.45]);
xlabel({'time $(s)$'},'Interpreter','latex','FontSize',17);
ylabel({'$\tilde{\theta}$ $(rad)$'},'Interpreter','latex','FontSize',17);
H = [h1, h2, h3, h4];
l=legend(H,'$T_f=0.5$','$T_f=0.2$','$T_f=0.1$','$T_f=0.05$','Location','northeast','Interpreter','latex');
set(l,'Fontsize',12);
