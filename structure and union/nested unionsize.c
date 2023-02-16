/*
	Name:v.elakiya  
	Date: 04/02/23 14:39
	Description:nested structure
*/
#include<stdio.h>
union manfree
{
struct manfree1
{
int a,b;
char d[10];
float c;	
}vman1;
struct manfree2
{
	int a,b;
	char d[10];                       
	float c;
}vman2;
}man;
int main()
{
printf("\n%d",sizeof(man));
printf("\n%d",sizeof(man.vman1));
printf("\n%d",sizeof(man.vman2));
printf("\n%d",sizeof(man.vman1.c));
}
