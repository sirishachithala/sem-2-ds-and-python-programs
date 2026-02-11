#include<stdio.h>
#include<string.h>
typedef struct student{
	char name[50];
	char branch[50];
	int id_no;
}stu;
int main()
{
	stu s;
	strcpy(s.name,"aditya university");
	strcpy(s.branch,"cse");
	s.id_no=183;
	printf("%s\n",s.name);
	printf("%s\n",s.branch);
	printf("%d",s.id_no);
	return 0;
}
