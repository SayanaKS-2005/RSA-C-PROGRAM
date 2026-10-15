#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int arr[10];
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the 5 numbers to array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&arr[i]);
	}
	printf("the array is");
	for(i=0;i<n;i++)
   {
	printf("%d",arr[i]);
   }
}

