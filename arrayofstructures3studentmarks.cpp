#include<stdio.h>
struct student
{
   int rno;
   int marks1;
   int marks2;
   int marks3;
};
int main()
{
    int i;
	struct student s[20];
    for(i=0;i<3;i++)
	{
	printf("enter the student rno:");
	scanf("%d",&s[i].rno);
	
	printf("enter the student marks1:");
	scanf("%d",&s[i].marks1);
	
	printf("enter the student marks2:");
	scanf("%d",&s[i].marks2);
	
	printf("enter the student marks3:");
	scanf("%d",&s[i].marks3);
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d %d %d\n",s[i].rno,s[i].marks1,s[i].marks2,s[i].marks3);
	}
}
