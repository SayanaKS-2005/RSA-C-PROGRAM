#include<stdio.h>
#include<conio.h>
void main()
{
	int A,P,l,b;
	printf("area of rectangle\n");
	printf("enter the length and breadth");
	scanf("%d %d",&l,&b);
	A=l*b;
	printf("%d",A);
	printf("perimeter of rectangle\n");
	P=2*l+b;
	printf("%d",P); 
}
