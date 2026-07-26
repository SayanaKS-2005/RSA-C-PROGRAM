#include<stdio.h>
#include<conio.h>
void main()
{
	int I,P,N,R;
	int div;
	printf("enter the principle amount \n");
	scanf("%d",&P);
	printf("enter the nunber of years \n");
	scanf("%d",&N);
	printf("enter the rate \n");
	scanf("%d",&R);
	I=P*N*R;
	div=I/100;
	printf("I=%d",I);
}
