#include<stdio.h>
#include<string.h>
struct dob
{
	int date;
	char month[10];
	int year;
};
struct student
{
	int rno;
	char name[20];
	struct dob d;
};
int main()
{
	struct student s1;
	s1.rno=1;
	strcpy(s1.name,"siri");
	s1.d.date=12;
	strcpy(s1.d.month,"dec");
	s1.d.year=2006;
	printf("%d\n%s\n",s1.rno,s1.name);
	printf("%d/%s/%d",s1.d.date,s1.d.month,s1.d.year);
	return 0;
}
