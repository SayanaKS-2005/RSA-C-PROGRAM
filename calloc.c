#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n,i;
printf("enter the elements:");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p==NULL)
{
	printf("memory allocation failed:");
	return 1;
}
printf("enter the elements:");
for(i=0;i<n;n++)
{
	scanf("%d",&p[i]);
}
printf("elements:");
for(i=0;i<n;i++)
{
	printf("%d",p[i]);
}
}

