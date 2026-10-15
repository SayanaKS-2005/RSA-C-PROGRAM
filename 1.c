//call by value
#include<stdio.h>
#include<conio.h>
void callbyvalue(int x)
{
	
	x=10;
	printf("%d\n",x);
	
}
void main()
{
	int a=20;
	printf("function before call a=%d\n",a);
	callbyvalue(a);
	printf("function after call a=%d\n",a);
}
