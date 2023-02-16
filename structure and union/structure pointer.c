/*
	Name: v.elakkiya 
	Date: 03/02/23 14:25
	Description: structure pointer
*/
#include<stdio.h>
struct abc
{
	int a;
	char b;
	float c;
};
int main()
{
	struct abc s1={45,'R',2.3};
	struct abc *ptr=&s1;
//	printf("%d %c %f",ptr->a,ptr->b,ptr->c);
printf("%d %c %f",(*ptr).a,(*ptr).b,(*ptr).c);
}
	


