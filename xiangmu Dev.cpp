#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<time.h> 

typedef struct key                //密码系统 结构体 
{
	char password;
    struct key *next;
}mima;

typedef struct type{ 
	float food;			//食品 
	float shopping;		//购物 
	float dailylife;	//日常用品 
	float traffic;		//出行交通 
	float education;	//教育 
	float recreation;	//娱乐 
	float other;
	float sum=food+shopping+dailylife+traffic+education+recreation+other;		//其它
}record[32];         //二位数组,13为月份，32为日期                      //二位数组,13为月份，32为日期 
 
void help();                             //由于help函数与function函数相互调用，则两个函数先定义 
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


void input(record *p,int *q,int &month)							//输入信息 
{
	int choice,choice1,i=0;
	record months[13];
	A:printf("请选择日期:");scanf("%d",&q[i]);
	system("cls");
	printf("这是%d月账单\n",month);
	printf("食品\t购物\t日常\t出行\t教育\t娱乐\t其它\n");
	scanf("%f%f%f%f%f%f%f",&p[month][q[i]].food,&p[month][q[i]].shopping,&p[month][q[i]].dailylife,&p[month][q[i]].traffic,&p[month][q[i]].education,&p[month][q[i]].recreation,&p[month][q[i]].other);
	printf("输入完成\n");
	printf("继续输入请选择1，返回选择0：");
	scanf("%d",&choice); 
	switch(choice)
	{
		case 1:n++;i++;goto A;break;
		case 0:break;	
	}
	printf("按任意键继续...");
	getch();
}

void showall(record *p,int *q,int &month)
{

	int m;
	system("cls");
	printf("这是%d月账单,共%d天\n",month,n);
	printf("日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
	for(m=0;m<n;m++) 
	printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
							 
	printf("按任意键继续...");
	getch(); 
}

void save(record *p,int *q,int &month)       					//保存信息到文件 
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
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==2)
	{ 
		in=fopen(filename2,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==3)
	{ 
		in=fopen(filename3,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	if(month==4)
	{ 
		in=fopen(filename4,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==5)
	{ 
		in=fopen(filename5,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	 
	if(month==6)
	{ 
		in=fopen(filename6,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==7)
	{ 
		in=fopen(filename7,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	 
	if(month==8)
	{ 
		in=fopen(filename8,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==9)
	{ 
		in=fopen(filename9,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==10)
	{ 
		in=fopen(filename10,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==11)
	{ 
		in=fopen(filename11,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
	
	if(month==12)
	{ 
		in=fopen(filename12,"w"); 
		fprintf(in,"这是%d月账单,共%d天\n",month,n);
		fprintf(in,"日期\t食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n");
		for(m=0;m<n;m++)
		fprintf(in,"%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",q[m],p[month][q[m]].food,p[month][q[m]].shopping,p[month][q[m]].dailylife,p[month][q[m]].traffic,p[month][q[m]].education,p[month][q[m]].recreation,p[month][q[m]].other,
								p[month][q[m]].food+p[month][q[m]].shopping+p[month][q[m]].dailylife+p[month][q[m]].traffic+p[month][q[m]].education+p[month][q[m]].recreation+p[month][q[m]].other);
		fclose(in);
		printf("\n保存完毕!");
		getch();
	} 
}

void load_info(record *p,int *q,int &month)						//从文件加载并显示已保存信息 
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
	printf("请选择查看的月份:");
	scanf("%d",&k);
	
	for(i=0;i<2;i++)
	switch(k)
	{
		case 1:
		fp1=fopen(filename1,"r");
		fscanf(fp1,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp1,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp1,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp1);
		break;
		
		case 2:out=fopen(filename,"r");fscanf(out,"%d",&n);fclose(out);
		fp2=fopen(filename2,"r");
		fscanf(fp2,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp2,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp2,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp2);
		break;
		
		case 3:
		fp3=fopen(filename3,"r");
		fscanf(fp3,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp3,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp3,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp3);
		break;
		
		case 4:
		fp4=fopen(filename4,"r");
		fscanf(fp4,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp4,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp4,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp4);
		break;
		
		case 5:
		fp5=fopen(filename5,"r");
		fscanf(fp5,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp5,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp5,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp5);
		break;
		
		case 6:
		fp6=fopen(filename6,"r");
		fscanf(fp6,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp6,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp6,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp6);
		break;

	
	case 7:
		fp7=fopen(filename7,"r");
		fscanf(fp7,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp7,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp7,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp7);
		break;
		
		case 8:
		fp8=fopen(filename8,"r");
		fscanf(fp8,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp8,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp8,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp8);
		break;
		
		case 9:
		fp9=fopen(filename9,"r");
		fscanf(fp9,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp9,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp9,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp9);
		break;
		
		case 10:
		fp10=fopen(filename10,"r");
		fscanf(fp10,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp10,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp10,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp10);
		break;
		
		case 11:
		fp11=fopen(filename11,"r");
		fscanf(fp11,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp11,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp11,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp11);
		break;
		
		case 12:
		fp12=fopen(filename12,"r");
		fscanf(fp12,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp12,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
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

int insert(record *p,int *q,int &month)     //新增信息 
{
	system("cls");
	record MONTH[12];
	int k,m,choice1,choice2;
	printf("请输入添加月份:");
	scanf("%d",&month);
	A:printf("请输入添加日期:");
	scanf("%d",&k);
	printf("请输入添加信息:\n");
	printf("食品\t购物\t日常\t出行\t教育\t娱乐\t其它\n");
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
	printf("添加成功!");
	save(p,q,month);
	system("cls");
	printf("\n\n\n\n\n");
	printf("                                                         1.继续添加\n");
	printf("                                                         2.返回上一界面\n");
	printf("\n\n");
	printf("                                                                请输入你的选择:");
	scanf("%d",&choice2); 
	system("cls"); 
	switch(choice2)
	{
		case 1:goto A;break;
		case 2:break;
	}
}

void paixu(record *p,int *q,int &month)						//排序函数 
{
	int choice,i,j;
  	int temp,days[33],m;
	printf("请选择月份:");
	scanf("%d",&month);
	jiazai(p,q,month);
	system("cls"); 
	printf("\n\n\n\n");
	printf("                                                    1.按日期降序排列\n");
	printf("                                                    2.按日期升序排列\n");
	printf("\n\n"); 
	printf("                                                               请输入你的选择:");
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
		printf("排序过后的信息:");
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
		printf("排序过后的信息:");
		showall(p,days,month);
		save(p,days,month);
		break;			
	}
}

void jiazai(record *p,int *q,int &month)					//从文件加载 
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
		fscanf(fp1,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp1,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp1,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp1);
		break;
		
		case 2:out=fopen(filename,"r");fscanf(out,"%d",&n);fclose(out);
		fp2=fopen(filename2,"r");
		fscanf(fp2,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp2,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp2,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp2);
		break;
		
		case 3:
		fp3=fopen(filename3,"r");
		fscanf(fp3,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp3,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp3,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp3);
		break;
		
		case 4:
		fp4=fopen(filename4,"r");
		fscanf(fp4,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp4,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp4,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp4);
		break;
		
		case 5:
		fp5=fopen(filename5,"r");
		fscanf(fp5,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp5,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp5,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp5);
		break;
		
		case 6:
		fp6=fopen(filename6,"r");
		fscanf(fp6,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp6,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp6,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp6);
		break;

	
	case 7:
		fp7=fopen(filename7,"r");
		fscanf(fp7,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp7,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp7,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp7);
		break;
		
		case 8:
		fp8=fopen(filename8,"r");
		fscanf(fp8,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp8,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp8,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp8);
		break;
		
		case 9:
		fp9=fopen(filename9,"r");
		fscanf(fp9,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp9,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp9,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp9);
		break;
		
		case 10:
		fp10=fopen(filename10,"r");
		fscanf(fp10,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp10,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp10,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp10);
		break;
		
		case 11:
		fp11=fopen(filename11,"r");
		fscanf(fp11,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp11,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
		}
		
		for(m=0;m<n;m++)
		{
		fscanf(fp11,"%d%f%f%f%f%f%f%f%f",&q[m],&p[month][q[m]].food,&p[month][q[m]].shopping,&p[month][q[m]].dailylife,&p[month][q[m]].traffic,&p[month][q[m]].education,&p[month][q[m]].recreation,&p[month][q[m]].other,&p[month][q[m]].sum);
		}
		fclose(fp11);
		break;
		
		case 12:
		fp12=fopen(filename12,"r");
		fscanf(fp12,"这是%d月账单,共%d天",&month,&n);
		
		for(m=1;m<10;m++)
		{
			fscanf(fp12,"%s",secondLine);//第二行的中文一个一个读 以便于下文数据能够被读准确
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

void RecoraFuc()     //开始记账运行的函数 
{
	system("cls");
		
	int choice,choice1,month;		//month用来选择输入月份,day用来确定输入几天 
	record months[13];			//结构体数组 用来存放12个月的数据 
	for(;;)
		{
			system("cls");
			print_time();
			printf("\n\n\n\n");
			printf("                                       ************************************");
			printf("\n\n\n");
			printf("                                                1.输入账单信息\n");
			printf("                                                2.新增账单信息\n");
			printf("                                                3.对账单信息排序\n");
			printf("                                                4.显示账单\n");
			printf("                                                5.查找账单信息\n");
			printf("                                                0.返回到上一目录\n");
			printf("\n\n\n");
			printf("                                       ************************************");
			printf("\n\n");
			printf("                                                                     请选择(0-10):");
			scanf("%d",&choice);
			
			if(choice==0)RecordMode();
			switch(choice)
			{
				case 1:printf("\n请选择月份:");scanf("%d",&month);input(months,day,month);save(months,day,month);break;
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
		printf("\n欢迎来到查询系统\n");
		printf("请输入查询的月份:");
		scanf("%d",&choice1);
		printf("请输入查询的日期:");
		scanf("%d",&choice2);
		jiazai(p,q,choice1);
		printf("食品\t购物\t日常\t出行\t教育\t娱乐\t其它\t总和\n"); 
		printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",p[choice1][q[choice2]].food,p[choice1][q[choice2]].shopping,p[choice1][q[choice2]].dailylife,p[choice1][q[choice2]].traffic,p[choice1][q[choice2]].education,p[choice1][q[choice2]].recreation,p[choice1][q[choice2]].other,
								p[choice1][q[choice2]].food+p[choice1][q[choice2]].shopping+p[choice1][q[choice2]].dailylife+p[choice1][q[choice2]].traffic+p[choice1][q[choice2]].education+p[choice1][q[choice2]].recreation+p[choice1][q[choice2]].other);
		printf("继续查找请按1,退出请按0:");
		scanf("%d",&choice3);
		if(choice3==0) break;
	}
}

void print_time()                                                //输出系统时间   函数  函数 
{
	time_t timep;
	struct tm *p;
	time(&timep);
	p= gmtime(&timep);
		p->tm_hour=p->tm_hour+8;    //无这一步时输出的小时数与系统显示的小时数相差8个小时，于是我们就将结构体中的小时加8，
		if(p->tm_hour>24)			//但这样小时数就会超过24时，于是我们有加入判断语句，将超过24小时的时间减去24，就得到正确时间 
		p->tm_hour-=24;
	printf("\n  北京时间 %d年%d月%d日%d时%d分\n",(1900+p->tm_year),(1+p->tm_mon),(p->tm_mday),(p->tm_hour),p->tm_min);
}

void RecordMode()                                //记账类别的选择  页面 
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
	printf("                  ###     请选择你的功能                                                            ###\n");                                                       
	printf("                  ###                                                                               ###\n");       
	printf("                  ###                                                                               ###\n");
	printf("                  ###                             开始记账      1                                   ###\n");
	printf("                  ###                                                                               ###\n");    
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                          	  返回到主页面  0                                   ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");                     
	printf("                  ###                                                                               ###\n");
	printf("                  #####################################################################################\n");
	printf("                  #####################################################################################\n");
	printf("\n");
	printf("                                                  请输入你的选项:");
	scanf("%d",&i);
	if(i>1)
	{
		printf("输入有误,请重新输入");
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
 
void setpassword(mima *&L,char *keyword)                                   //登录系统函数 
{
	system("cls");
	static int count = 1;  //用于计数，当count>3之后推出程序
	mima *p,*tc;
	int i;
	L=(mima *)malloc(sizeof(mima));
	L->next=NULL;
	tc=L;
	printf("请输入密码:(错误次数不超过三次)\n"); 
	for(i=0;i<6;i++)
	{
		p=(mima *)malloc(sizeof(mima));
		p->password=_getch();
		printf("*"); 
		tc->next=p;
		tc=p;
	}
	char judge[6];				//判断密码是否匹配的数组 
	mima *head;				//用来遍历输入的密码赋值给judge数组 
	head=L->next;
	for(i=0;i<6;i++)
	{
		judge[i]=head->password;
		head=head->next;
	}	
	if(strcmp(judge,keyword) == 0)	
	{
		printf("\n\n\n密码正确，正在进入系统，请稍等......");
		sleep(2);
		system("cls");  		
	}	
	else
	{
		printf("\n密码错误\n");
		sleep(1);
		count++;
		if (count <= 3)
		{
			setpassword(L,keyword);
		}
		else
		{
			system("cls");
			printf("\n\n\n                       你输入的密码都不正确，请确认密码是否正确，稍后再尝试,再见。\n\n\n\n"); 
			exit(0);
		}
	}	
}

void changepassword(char *keyword)					//修改密码  修改密码  修改密码  修改密码  修改密码  函数 
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
	printf("请输入原密码:(错误次数不超过三次)\n");
	for(i=0;i<6;i++)
	{
		judge1[i]=_getch();
		printf("*");
	}
	if(strcmp(judge1,keyword) == 0)
	{
	printf("\n密码正确\n");
	sleep(1);
	}
	else
	{
		printf("\n密码错误(一秒后重试)\n");
		sleep(1);
		flag++;
		if (flag <= 3)
		{
			goto B;
		} 
		else
		{
			printf("\n\n\n您的输入错误次数已达3次，系统将返回到主页面");
			sleep(4);                      //修改次数达到三次画后 ，回到主页面 
			function(); 
		}
	}
	system("cls");
	printf("请输入新密码:");
	for(i=0;i<6;i++)
	{
		newword1[i]=_getch();
		printf("*");
	}
	printf("\n");
	A:printf("请再次输入新密码:");
	for(i=0;i<6;i++)
	{
		newword2[i]=_getch();
		printf("*");
	}
	if(strcmp(newword1,newword2) == 0)
	{
		strcpy(keyword,newword2);
		printf("\n密码修改成功!\n");	
		printf("\n\n即将返回主页面，请稍等......"); 
		sleep(3);
		system("cls");
	}
	else
	{
		printf("\n两次密码输入不同\n"); 
		goto A;
	}
	
	if((in=fopen(filename,"w"))==NULL)
	{
		return; 
	} 
	fprintf(in,"%s",newword2);
	fclose(in);
}

void function()                                   //记账功能函数 
{ 	
	fanhui2:system("cls");
	for(;;)
	{	
	printf("\n");
	printf("\n");
	printf("                                                 个 人 记 账 系 统\n");
	printf("\n");
	printf("\n");
	printf("\n");	
	printf("                  #####################################################################################\n");
	printf("                  #####################################################################################\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");                                                       
	printf("                  ###                                                                               ###\n");       
	printf("                  ###                                                                               ###\n");
	printf("                  ###                             登录系统输入    1                                 ###\n");
	printf("                  ###                                                                               ###\n");    
	printf("                  ###                             修改密码输入    2                                 ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                          	  退出系统输入    0                                 ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                                               ###\n");
	printf("                  ###                                                  查看系统帮助 输入    3       ###\n");                     
	printf("                  ###                                                                               ###\n");
	printf("                  #####################################################################################\n");
	printf("                  #####################################################################################\n");
	printf("\n");
	printf("                                                  请输入你的选项:");
	
	mima *L;
	FILE *in;
	char keyword[7]; 		//初始密码 
	char filename[20]="passwordfile";
	int choice,i;
	if((in=fopen(filename,"r"))==NULL)
	{
	} 
	fscanf(in,"%s",keyword);
	 
	scanf("%d",&choice);
	if(choice>3)
	{
		printf("输入有误,请重新输入");
		sleep(1);
		goto fanhui2;
	}

		if(choice==0)
		{
			system("cls");
			printf("\n\n\n\n\n                                             感谢你的使用，再见！\n\n\n\n\n\n\n\n\n\n");
			 exit(0); 
		} 
			switch(choice)
			{
		
				case 1:setpassword(L,keyword);
						print_time();                            //显示时间 
						RecordMode(); 					         //显示记账主页面 
						break;
				case 2:changepassword(keyword);break;
				case 3:help();break;	
			}
	}
}	

void help()                                        //系统帮助函数 
{
	
	int n; 
	system("cls");
	printf("注意事项:\n");
	printf("1.系统初始密码为 000000\n");
	printf("\n");
	printf("\n");
	printf("										按任意键继续...\n");
	getch();		 
	system("cls");
}

int main()                              //主函数   主函数 主函数 主函数 主函数 主函数 主函数 主函数 主函数
{
	system("color 30");
	//用 system(“color 0A”); 其中color后面的0是背景色代号，A是前景色代号。各颜色代码如下：
	//0=黑色 1=蓝色 2=绿色 3=湖蓝色 4=红色 5=紫色 6=黄色 7=白色 8=灰色 9=淡蓝色 A=淡绿色 B=淡浅绿色 C=淡红色 D=淡紫色 E=淡黄色 F=亮白色
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
	printf("\n                                                                             正在进入，请稍等......");
	printf("\n");
    sleep(3);
   

	printf("\n");
	function() ;
}
