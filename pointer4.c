#include<stdio.h>
#include<conio.h>
struct student{
	int rollno;
	char name[20];
	float mark;
};
int main()
{
	struct student s;
	struct student *ptr;
	ptr=&s;
	printf("enter rollno:");
	scanf("%d",&ptr->rollno);
	printf("enter name:");
	scanf("%s",&ptr->name);
	printf("enter mark:");
	scanf("%f",&ptr->mark);
	printf("student details\n");
	printf("rollno%d\n",ptr->rollno);
	printf("name%s\n",ptr->name);
	printf("mark%f\n",ptr->mark);
	return 0;
}
