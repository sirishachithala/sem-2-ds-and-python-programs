#include<stdio.h>
#include<string.h>
struct student	
{
	int rno;
	char name[50];
};
int main()
{
	struct student s1;
	s1.rno=1;
	strcpy(s1.name,"siri");
	struct student s2={2,"suma"};
	printf("%d %s\n",s1.rno,s1.name);
	printf("%d %s",s2.rno,s2.name);
	return 0;
}
