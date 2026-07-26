#include<stdio.h>
#include<conio.h>
void main()
{
	int rno,M1,M2,M3,avg,sum,grade;
	char name[10];
	printf("enter the name \n");
	scanf("%s",&name);
	printf("enter the rollno \n");
	scanf("%d",&rno);
	printf("enter the M1 \n");
	scanf("%d",&M1);
	printf("enter the M2 \n");
	scanf("%d",&M2);
	printf("enter the M3 \n");
	scanf("%d",&M3);
	sum=M1+M2+M3;
	avg=sum/3;
	printf("Average\n%d",avg);
	if(avg>=90&&avg<=100)
	{
		printf("the grade is A");
		}
		else if(avg>=60&&avg<=89)
		{
			printf("the grade is B");
		}
		else if(avg>=30&&avg<=59)
		{
			printf("the grade is C");
		}	
	else
	{
		printf("fail");
	}
	
}
