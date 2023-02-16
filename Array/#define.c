/*
	Name: v.elkkiya 
	Date: 13/02/23 11:50
	Description: 
*/
#include<stdio.h>
#define a 10
void main()
{
#ifdef a
printf("hello i am here....");
#endif
#ifndef a 
printf("not defined");
#else
printf("r u there");
#endif
}
