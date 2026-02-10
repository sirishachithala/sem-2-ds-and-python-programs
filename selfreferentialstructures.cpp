#include<stdio.h>
struct node
{
	int data;
	struct node*next;
};
int main()
{
	struct node obj1,obj2,obj3;
	obj1.data=20;
	obj1.next=NULL;
	obj2.data=90;
	obj2.next=NULL;
	obj3.data=120;
	obj3.next=NULL;
	obj1.next=&obj2;
	obj2.next=&obj3;
	printf("%d",obj1.next->next->data);
	printf("%d",obj1.next->next->data);
	return 0;
}
