#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n,i,new;
printf("enter the elements:");
scanf("%d",&n);
p=(int *)calloc(n,sizeof(int));
if(p==NULL)
{
	printf("memory allocation failed:");
	return 1;
}
printf("enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&p[i]);
}
printf("enter the new element");
scanf("%d",&new);
p=(int *)realloc(p,new *sizeof(int));
if(p==NULL)
{
	printf("memory reallocation failed:");
	return 1;
	
}
if(new>n)
{
	printf("enter the numbers to be added");
	
	for(i=0;i<new;i++)
	{
	scanf("%d",&p[i]);
	}
}
printf("the array elements are");
for(i=0;i<new;i++)
{
	printf("%d",p[i]);
}

}
