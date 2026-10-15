// write a c program to define a function swap() the exchange two numbers using call by reference(using pointers).display the values before and after the function call and varify the value in main() are changed
#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y,int *c)
{
	
    *c=*y;
    *y=*x;
    *x=*c;
    printf("value in num1 %d\n",*x);
    printf("value in num2 %d\n",*y);
    
}
int main()
{
    int num1, num2,c;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Before function call:");
    printf("num1=%d,num2=%d",num1,num2);
    swap(&num1,&num2,&c);
    printf("After function call:");
    printf("num1=%d,\nnum2=%d",num1,num2);
}
    


