#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int even;
	int odd;
	int a = n % 2;
	printf("enter the number");
	scanf("%d",&n);
	even = (n % 2 == 0);
	odd = (n % 2 != 0);
	printf("number is even = %d",even);
	printf("number is odd = %d",odd);
	}
