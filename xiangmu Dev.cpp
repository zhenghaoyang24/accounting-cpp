#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<time.h> 

typedef struct key                //����ϵͳ �ṹ�� 
{
	char password;
    struct key *next;
}mima;

typedef struct type{ 
	float food;			//ʳƷ 
	float shopping;		//���� 
	float dailylife;	//�ճ���Ʒ 
	float traffic;		//���н�ͨ 
	float education;	//���� 
	float recreation;	//���� 
	float other;
	float sum=food+shopping+dailylife+traffic+education+recreation+other;		//����
}record[32];         //��λ����,13Ϊ�·ݣ�32Ϊ����                      //��λ����,13Ϊ�·ݣ�32Ϊ���� 
 
void help();                             //����help������function�����໥���ã������������ȶ��� 
void function();
void print_time();
void RecoraFuc();
void RecordMode();
void save(record *p,int *q,int &month);
void input(record *p,int *q,int &month);
void showall(record *p,int *q,int &month);
void load_info(record *p,int *q,int &month);
int insert(record *p,int *q,int &month);
void paixu(record *p,int *q,int &month);
void jiazai(record *p,int *q,int &month);
void search(record *p,int *q,int &month);


int day[33],n=1;


void input(record *p,int *q,int &month)							//������Ϣ 
{
	int choice,choice1,i=0;
	record months[13];
	A:printf("��ѡ������:");scanf("%d",&q[i]);
	system("cls");
	printf("����%d���˵�\n",month);
	printf("ʳƷ\t����\t�ճ�\t����\t����\t����\t����\n");
	scanf("%f%f%f%f%f%f%f",&p[month][q[i]].food,&p[month][q[i]].shopping,&p[month][q[i]].dailylife,&p[month][q[i]].traffic,&p[month][q[i]].education,&p[month][q[i]].recreation,&p[month][q[i]].other);
	printf("�������\n");
	printf("����������ѡ��1������ѡ��0��");
	scanf("%d",&choice); 
	switch(choice)
	{
		case 1:n++;i++;goto A;break;
		case 0:break;	
	}
	printf("�����������...");
	getch();
}

void showall(record *p,int *q,int &month)
{

	int m;
	system("cls");
	printf("����%d���˵�,��%d��\n",month,n);
	printf("����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
	for(m=0;m<n;m++) 
	printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
							 
	printf("�����������...");
	getch(); 
}

void save(record *p,int *q,int &month)       					//������Ϣ���ļ� 
{
	FILE *in;
	int choice;
	char filename1[20]="information1.txt";
	char filename2[20]="information2.txt";
	char filename3[20]="information3.txt";
	char filename4[20]="information4.txt";
	char filename5[20]="information5.txt";
	char filename6[20]="information6.txt";
	char filename7[20]="information7.txt";
	char filename8[20]="information8.txt";
	char filename9[20]="information9.txt";
	char filename10[20]="information10.txt";
	char filename11[20]="information11.txt";
	char filename12[20]="information12.txt";
	int m;
	
	if(month==1)
	{ 
		in=fopen(filename1,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==2)
	{ 
		in=fopen(filename2,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==3)
	{ 
		in=fopen(filename3,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	if(month==4)
	{ 
		in=fopen(filename4,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==5)
	{ 
		in=fopen(filename5,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	 
	if(month==6)
	{ 
		in=fopen(filename6,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==7)
	{ 
		in=fopen(filename7,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	 
	if(month==8)
	{ 
		in=fopen(filename8,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==9)
	{ 
		in=fopen(filename9,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==10)
	{ 
		in=fopen(filename10,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==11)
	{ 
		in=fopen(filename11,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
	
	if(month==12)
	{ 
		in=fopen(filename12,"w"); 
		fprintf(in,"����%d���˵�,��%d��\n",month,n);
		fprintf(in,"����\tʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n�������!");
		getch();
	} 
}

void load_info(record *p,int *q,int &month)						//���ļ����ز���ʾ�ѱ�����Ϣ 
{
	char filename[20]="getn.txt",secondLine[50];
	FILE *out,*fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8,*fp9,*fp10,*fp11,*fp12;
	int m,k,l,i;
	
	char filename1[20]="information1.txt";
	char filename2[20]="information2.txt";
	char filename3[20]="information3.txt";
	char filename4[20]="information4.txt";
	char filename5[20]="information5.txt";
	char filename6[20]="information6.txt";
	char filename7[20]="information7.txt";
	char filename8[20]="information8.txt";
	char filename9[20]="information9.txt"; 
	char filename10[20]="information10.txt";
	char filename11[20]="information11.txt";
	char filename12[20]="information12.txt";
	
	system("cls");
	printf("��ѡ��鿴���·�:");
	scanf("%d",&k);
	
	for(i=0;i<2;i++)
	switch(k)
	{
		case 1:
		fp1=fopen(filename1,"r");
		fscanf(fp1,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp1,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp1,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp1);
		break;
		
		case 2:out=fopen(filename,"r");fscanf(out,"%d",&n);fclose(out);
		fp2=fopen(filename2,"r");
		fscanf(fp2,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp2,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp2,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp2);
		break;
		
		case 3:
		fp3=fopen(filename3,"r");
		fscanf(fp3,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp3,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp3,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp3);
		break;
		
		case 4:
		fp4=fopen(filename4,"r");
		fscanf(fp4,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp4,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp4,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp4);
		break;
		
		case 5:
		fp5=fopen(filename5,"r");
		fscanf(fp5,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp5,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp5,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp5);
		break;
		
		case 6:
		fp6=fopen(filename6,"r");
		fscanf(fp6,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp6,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp6,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp6);
		break;

	
	case 7:
		fp7=fopen(filename7,"r");
		fscanf(fp7,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp7,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp7,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp7);
		break;
		
		case 8:
		fp8=fopen(filename8,"r");
		fscanf(fp8,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp8,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp8,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp8);
		break;
		
		case 9:
		fp9=fopen(filename9,"r");
		fscanf(fp9,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp9,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp9,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp9);
		break;
		
		case 10:
		fp10=fopen(filename10,"r");
		fscanf(fp10,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp10,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp10,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp10);
		break;
		
		case 11:
		fp11=fopen(filename11,"r");
		fscanf(fp11,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp11,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp11,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp11);
		break;
		
		case 12:
		fp12=fopen(filename12,"r");
		fscanf(fp12,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp12,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp12,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp12);
		break;
	}
	showall(p,day,month);
}

int insert(record *p,int *q,int &month)     //������Ϣ 
{
	system("cls");
	record MONTH[12];
	int k,m,choice1,choice2;
	printf("����������·�:");
	scanf("%d",&month);
	A:printf("�������������:");
	scanf("%d",&k);
	printf("�����������Ϣ:\n");
	printf("ʳƷ\t����\t�ճ�\t����\t����\t����\t����\n");
	scanf("%f%f%f%f%f%f%f",&MONTH[month][k].food,&MONTH[month][k].shopping,&MONTH[month][k].dailylife,&MONTH[month][k].traffic,&MONTH[month][k].education,&MONTH[month][k].recreation,&MONTH[month][k].other);
	if(q[0]==0)
	{
	q[n-1]=k;
	p[month][q[n-1]]=MONTH[month][k];
	}
	else
	{
	q[n]=k;
	p[month][q[n]]=MONTH[month][k];
	n++;
	}
	printf("��ӳɹ�!");
	save(p,q,month);
	system("cls");
	printf("\n\n\n\n\n");
	printf("                                                         1.�������\n");
	printf("                                                         2.������һ����\n");
	printf("\n\n");
	printf("                                                                ���������ѡ��:");
	scanf("%d",&choice2); 
	system("cls"); 
	switch(choice2)
	{
		case 1:goto A;break;
		case 2:break;
	}
}

void paixu(record *p,int *q,int &month)						//������ 
{
	int choice,i,j;
  	int temp,days[33],m;
	printf("��ѡ���·�:");
	scanf("%d",&month);
	jiazai(p,q,month);
	system("cls"); 
	printf("\n\n\n\n");
	printf("                                                    1.�����ڽ�������\n");
	printf("                                                    2.��������������\n");
	printf("\n\n"); 
	printf("                                                               ���������ѡ��:");
	scanf("%d",&choice);
	for(i=0;i<n;i++)
	days[i]=q[i];
	switch(choice)
	{
		case 1:for(i=0;i<n-1;i++)
				for(j=0;j<n-1-i;j++)
					if(days[j]<days[j+1])
					{
						temp=days[j];
						days[j]=days[j+1];
						days[j+1]=temp;
					}
		printf("����������Ϣ:");
		showall(p,days,month);
		save(p,days,month);
		break;
		case 2:for(i=0;i<n-1;i++)
					for(j=0;j<n-1-i;j++)
					if(days[j]>days[j+1])
					{
						temp=days[j];
						days[j]=days[j+1];
						days[j+1]=temp;			
					}
		printf("����������Ϣ:");
		showall(p,days,month);
		save(p,days,month);
		break;			
	}
}

void jiazai(record *p,int *q,int &month)					//���ļ����� 
{
	char filename[20]="getn.txt",secondLine[50];
	FILE *out,*fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8,*fp9,*fp10,*fp11,*fp12;
	int m,k,l,i;
	
	char filename1[20]="information1.txt";
	char filename2[20]="information2.txt";
	char filename3[20]="information3.txt";
	char filename4[20]="information4.txt";
	char filename5[20]="information5.txt";
	char filename6[20]="information6.txt";
	char filename7[20]="information7.txt";
	char filename8[20]="information8.txt";
	char filename9[20]="information9.txt"; 
	char filename10[20]="information10.txt";
	char filename11[20]="information11.txt";
	char filename12[20]="information12.txt";
	
	for(i=0;i<2;i++)
	switch(month)
	{
		case 1:
		fp1=fopen(filename1,"r");
		fscanf(fp1,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp1,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp1,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp1);
		break;
		
		case 2:out=fopen(filename,"r");fscanf(out,"%d",&n);fclose(out);
		fp2=fopen(filename2,"r");
		fscanf(fp2,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp2,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp2,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp2);
		break;
		
		case 3:
		fp3=fopen(filename3,"r");
		fscanf(fp3,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp3,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp3,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp3);
		break;
		
		case 4:
		fp4=fopen(filename4,"r");
		fscanf(fp4,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp4,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp4,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp4);
		break;
		
		case 5:
		fp5=fopen(filename5,"r");
		fscanf(fp5,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp5,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp5,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp5);
		break;
		
		case 6:
		fp6=fopen(filename6,"r");
		fscanf(fp6,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp6,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp6,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp6);
		break;

	
	case 7:
		fp7=fopen(filename7,"r");
		fscanf(fp7,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp7,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp7,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp7);
		break;
		
		case 8:
		fp8=fopen(filename8,"r");
		fscanf(fp8,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp8,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp8,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp8);
		break;
		
		case 9:
		fp9=fopen(filename9,"r");
		fscanf(fp9,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp9,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp9,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp9);
		break;
		
		case 10:
		fp10=fopen(filename10,"r");
		fscanf(fp10,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp10,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp10,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp10);
		break;
		
		case 11:
		fp11=fopen(filename11,"r");
		fscanf(fp11,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp11,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp11,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp11);
		break;
		
		case 12:
		fp12=fopen(filename12,"r");
		fscanf(fp12,"����%d���˵�,��%d��",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp12,"%s",secondLine);//�ڶ��е�����һ��һ���� �Ա������������ܹ�����׼ȷ
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp12,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp12);
		break;
	}
	//showall(p,day,month);
}

void RecoraFuc()     //��ʼ�������еĺ��� 
{
	system("cls");
		
	int choice,choice1,month;		//month����ѡ�������·�,day����ȷ�����뼸�� 
	record months[13];			//�ṹ������ �������12���µ����� 
	for(;;)
		{
			system("cls");
			print_time();
			printf("\n\n\n\n");
			printf("                                       ************************************");
			printf("\n\n\n");
			printf("                                                1.�����˵���Ϣ\n");
			printf("                                                2.�����˵���Ϣ\n");
			printf("                                                3.���˵���Ϣ����\n");
			printf("                                                4.��ʾ�˵�\n");
			printf("                                                5.�����˵���Ϣ\n");
			printf("                                                0.���ص���һĿ¼\n");
			printf("\n\n\n");
			printf("                                       ************************************");
			printf("\n\n");
			printf("                                                                     ��ѡ��(0-10):");
			scanf("%d",&choice);
			
			if(choice==0)RecordMode();
			switch(choice)
			{
				case 1:printf("\n��ѡ���·�:");scanf("%d",&month);input(months,day,month);save(months,day,month);break;
			//	case 5:showall(months,day,month);break;
				case 4:load_info(months,day,month);break;
				case 2:insert(months,day,month);break;
				case 3:paixu(months,day,month);break;
				case 5:search(months,day,month);break;
			}
		}
}

void search(record *p,int *q,int &month)
{
	
	int result=-1,choice1,choice2,choice3;
	for(;;)
	{
		system("cls");
		print_time();
		printf("\n��ӭ������ѯϵͳ\n");
		printf("�������ѯ���·�:");
		scanf("%d",&choice1);
		printf("�������ѯ������:");
		scanf("%d",&choice2);
		jiazai(p,q,choice1);
		printf("ʳƷ\t����\t�ճ�\t����\t����\t����\t����\t�ܺ�\n"); 
		printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",p[choice1][q[choice2]].food,p[choice1][q[choice2]].shopping,p[choice1][q[choice2]].dailylife,p[choice1][q[choice2]].traffic,p[choice1][q[choice2]].education,p[choice1][q[choice2]].recreation,p[choice1][q[choice2]].other,
								p[choice1][q[choice2]].food+p[choice1][q[choice2]].shopping+p[choice1][q[choice2]].dailylife+p[choice1][q[choice2]].traffic+p[choice1][q[choice2]].education+p[choice1][q[choice2]].recreation+p[choice1][q[choice2]].other);
		printf("���������밴1,�˳��밴0:");
		scanf("%d",&choice3);
		if(choice3==0) break;
	}
}

void print_time()                                                //���ϵͳʱ��   ����  ���� 
{
	time_t timep;
	struct tm *p;
	time(&timep);
	p= gmtime(&timep);
		p->tm_hour=p->tm_hour+8;    //����һ��ʱ�����Сʱ����ϵͳ��ʾ��Сʱ�����8��Сʱ���������Ǿͽ��ṹ���е�Сʱ��8��
		if(p->tm_hour>24)			//������Сʱ���ͻᳬ��24ʱ�����������м����ж���䣬������24Сʱ��ʱ���ȥ24���͵õ���ȷʱ�� 
		p->tm_hour-=24;
	printf("\n  ����ʱ�� %d��%d��%d��%dʱ%d��\n",(1900+p->tm_year),(1+p->tm_mon),(p->tm_mday),(p->tm_hour),p->tm_min);
}

void RecordMode()                                //��������ѡ��  ҳ�� 
{
	fanhui1:system("cls");
	print_time();
	int i;
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");	
	printf("                  #####################################################################################\n");
	printf("                  #####################################################################################\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###     ��ѡ����Ĺ���                                                            ###\n");                                                       
	printf("                  ###                                                                               ###\n");       
	printf("                  ###                                                                               ###\n");
	printf("                  ###                             ��ʼ����      1                                   ###\n");
	printf("                  ###                                                                               ###\n");    
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                          	  ���ص���ҳ��  0                                   ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");                     
	printf("                  ###                                                                               ###\n");
	printf("                  #####################################################################################\n");
	printf("                  #####################################################################################\n");
	printf("\n");
	printf("                                                  ���������ѡ��:");
	scanf("%d",&i);
	if(i>1)
	{
		printf("��������,����������");
		sleep(1);
		goto fanhui1;
	}
	
	else 
	switch(i)
	{
		case 0:system("cls");function();break;
		case 1:RecoraFuc();break;
	}
	}
 
void setpassword(mima *&L,char *keyword)                                   //��¼ϵͳ���� 
{
	system("cls");
	static int count = 1;  //���ڼ�������count>3֮���Ƴ�����
	mima *p,*tc;
	int i;
	L=(mima *)malloc(sizeof(mima));
	L->next=NULL;
	tc=L;
	printf("����������:(�����������������)\n"); 
	for(i=0;i<6;i++)
	{
		p=(mima *)malloc(sizeof(mima));
		p->password=_getch();
		printf("*"); 
		tc->next=p;
		tc=p;
	}
	char judge[6];				//�ж������Ƿ�ƥ������� 
	mima *head;				//����������������븳ֵ��judge���� 
	head=L->next;
	for(i=0;i<6;i++)
	{
		judge[i]=head->password;
		head=head->next;
	}	
	if(strcmp(judge,keyword) == 0)	
	{
		printf("\n\n\n������ȷ�����ڽ���ϵͳ�����Ե�......");
		sleep(2);
		system("cls");  		
	}	
	else
	{
		printf("\n�������\n");
		sleep(1);
		count++;
		if (count <= 3)
		{
			setpassword(L,keyword);
		}
		else
		{
			system("cls");
			printf("\n\n\n                       ����������붼����ȷ����ȷ�������Ƿ���ȷ���Ժ��ٳ���,�ټ���\n\n\n\n"); 
			exit(0);
		}
	}	
}

void changepassword(char *keyword)					//�޸�����  �޸�����  �޸�����  �޸�����  �޸�����  ���� 
{
	B:system("cls");
	FILE *in;
	char filename[20]="passwordfile";
	int i,k;
	static int flag=1;
	char judge1[7],newword1[7],newword2[7];
	if((in=fopen(filename,"r"))==NULL)
	{
		return; 
	} 
	fscanf(in,"%s",keyword);
	printf("������ԭ����:(�����������������)\n");
	for(i=0;i<6;i++)
	{
		judge1[i]=_getch();
		printf("*");
	}
	if(strcmp(judge1,keyword) == 0)
	{
	printf("\n������ȷ\n");
	sleep(1);
	}
	else
	{
		printf("\n�������(һ�������)\n");
		sleep(1);
		flag++;
		if (flag <= 3)
		{
			goto B;
		} 
		else
		{
			printf("\n\n\n���������������Ѵ�3�Σ�ϵͳ�����ص���ҳ��");
			sleep(4);                      //�޸Ĵ����ﵽ���λ��� ���ص���ҳ�� 
			function(); 
		}
	}
	system("cls");
	printf("������������:");
	for(i=0;i<6;i++)
	{
		newword1[i]=_getch();
		printf("*");
	}
	printf("\n");
	A:printf("���ٴ�����������:");
	for(i=0;i<6;i++)
	{
		newword2[i]=_getch();
		printf("*");
	}
	if(strcmp(newword1,newword2) == 0)
	{
		strcpy(keyword,newword2);
		printf("\n�����޸ĳɹ�!\n");	
		printf("\n\n����������ҳ�棬���Ե�......"); 
		sleep(3);
		system("cls");
	}
	else
	{
		printf("\n�����������벻ͬ\n"); 
		goto A;
	}
	
	if((in=fopen(filename,"w"))==NULL)
	{
		return; 
	} 
	fprintf(in,"%s",newword2);
	fclose(in);
}

void function()                                   //���˹��ܺ��� 
{ 	
	fanhui2:system("cls");
	for(;;)
	{	
	printf("\n");
	printf("\n");
	printf("                                                 �� �� �� �� ϵ ͳ\n");
	printf("\n");
	printf("\n");
	printf("\n");	
	printf("                  #####################################################################################\n");
	printf("                  #####################################################################################\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");                                                       
	printf("                  ###                                                                               ###\n");       
	printf("                  ###                                                                               ###\n");
	printf("                  ###                             ��¼ϵͳ����    1                                 ###\n");
	printf("                  ###                                                                               ###\n");    
	printf("                  ###                             �޸���������    2                                 ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                          	  �˳�ϵͳ����    0                                 ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                  �鿴ϵͳ���� ����    3       ###\n");                     
	printf("                  ###                                                                               ###\n");
	printf("                  #####################################################################################\n");
	printf("                  #####################################################################################\n");
	printf("\n");
	printf("                                                  ���������ѡ��:");
	
	mima *L;
	FILE *in;
	char keyword[7]; 		//��ʼ���� 
	char filename[20]="passwordfile";
	int choice,i;
	if((in=fopen(filename,"r"))==NULL)
	{
	} 
	fscanf(in,"%s",keyword);
	 
	scanf("%d",&choice);
	if(choice>3)
	{
		printf("��������,����������");
		sleep(1);
		goto fanhui2;
	}

		if(choice==0)
		{
			system("cls");
			printf("\n\n\n\n\n                                             ��л���ʹ�ã��ټ���\n\n\n\n\n\n\n\n\n\n");
			 exit(0); 
		} 
			switch(choice)
			{
		
				case 1:setpassword(L,keyword);
						print_time();                            //��ʾʱ�� 
						RecordMode(); 					         //��ʾ������ҳ�� 
						break;
				case 2:changepassword(keyword);break;
				case 3:help();break;	
			}
	}
}	

void help()                                        //ϵͳ�������� 
{
	
	int n; 
	system("cls");
	printf("ע������:\n");
	printf("1.ϵͳ��ʼ����Ϊ 000000\n");
	printf("\n");
	printf("\n");
	printf("										�����������...\n");
	getch();		 
	system("cls");
}

int main()                              //������   ������ ������ ������ ������ ������ ������ ������ ������
{
	system("color 30");
	//�� system(��color 0A��); ����color�����0�Ǳ���ɫ���ţ�A��ǰ��ɫ���š�����ɫ�������£�
	//0=��ɫ 1=��ɫ 2=��ɫ 3=����ɫ 4=��ɫ 5=��ɫ 6=��ɫ 7=��ɫ 8=��ɫ 9=����ɫ A=����ɫ B=��ǳ��ɫ C=����ɫ D=����ɫ E=����ɫ F=����ɫ
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                              **                                     *                        \n");
	printf("                              **                                      **          *      *******\n"); 
	printf("         **************      ***************                           *        **       ********    \n");
	printf("         ***************    **            **                                  ***              **\n");
	printf("         ***        ***   **       *       *                       ********   ***       **     ** \n");
	printf("          **       **   *          *                               ********   **          *    ** \n");
	printf("          **     **              **                                    **     **      *    **  ** \n");
	printf("           **   **              ****                                 **       **   ***      ** ** \n");
	printf("             ** **              **  **                              *******   **  **          *** \n");
	printf("              ***             **    **                           *     **    ****            **   \n");
	printf("            *** **           **      **                           **  **      **              \n");
	printf("            **    **         **        **                            *******                      * \n");
	printf("          *         *      *             *                         **       *****               ** \n");
	printf("                                                                 *              ***************\n");
	printf("\n"); 
	printf("\n");
	printf("\n                                                                             ���ڽ��룬���Ե�......");
	printf("\n");
    sleep(3);
   

	printf("\n");
	function() ;
}
