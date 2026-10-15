#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j;
	int A[10][10];
	printf("enter the row\n");
	scanf("%d",&r);
	printf("enter the Column\n");
	scanf("%d",&c);
	printf("enter the elments in to matrix\t");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d\t ",&A[i][j]);
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}
