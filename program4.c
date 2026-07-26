#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
		printf("a is smaller ");
		}
		else
		{
		printf("c is smaller ");
	    }
	}
	else
	{
		if(b<c)
		{
		printf("b is smaller ");
	    }
		else
		{
		printf("c is smaller ");
	    }
    }
}
