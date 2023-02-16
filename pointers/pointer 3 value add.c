/*
	Name:  Elakkiya
	Date: 26/01/23 
	Description: add the 3 value in one pointer
	
*/
#include<stdio.h>
int main()
{
 int a=10,b=5,c=6;
 int*p;
 p=&a;
 p=&b;
 p=&c;
 printf("\nthe adress of a,b,c %d,%d,%d",&a,&b,&c);
 printf("\nthe value of a,b,c%d,%d,%d",*p,*p++,*p++);                        // pointer vale increment and printed
 printf(" \nthe adress of *p,*p++,*p++ %d,%d,%d",p,p++,p++);
 printf("\n adress of *p%d",&p);
}


