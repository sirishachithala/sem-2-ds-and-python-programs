#include<stdio.h>
void update(struct student *);
struct student
{
	int rno;
	int marks;
};
int main()
{
	struct student s1;
	s1.rno=183;
	s1.marks=90;
	printf("before updation:%d\n",s1.marks);
	update(&s1);
	printf("after updation :%d",s1.marks);
	return 0;
}
void update(struct student *s)
{
	s->marks=s->marks+5;
}
