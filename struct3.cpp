#include<stdio.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	struct student s1;
	printf("enter student 1 details\n");
	scanf("%d%s",&s1.rno,s1.name);
	struct student s2={2,"suma"};
	printf("%d %s\n",s1.rno,s1.name);
	printf("%d %s",s2.rno,s2.name);
}
