/*
	Name:  Elakkiya
	Date: 26/01/23 
	Description: add the 3 value in one pointer
	
*/
#include<stdio.h>
int add(int * ,int *);
int main()
{
 int i,a[5]={1,2,3,4},b[5]={1,2,3,4};
 int*p;
 p=&a;
 p=&b;
 add(&a,&b);
}
 int add(int *c ,int *d)
 {
 printf("\n\t%d",(*c+*d));
 printf("\t%d",((*++c)+(*++d)));
  printf("\n\t%d",((*++c))+(*++d));
 printf("\t%d",((*++c))+(*++d)); 
}