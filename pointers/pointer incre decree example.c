/*  Name: 
	Author: 
	Date: 27/01/23 11:19
	Description: example program for pointer increment decrement
*/ 
#include<stdio.h>
int main()
{
    int *p,a=1,b=2,c=3,d=4;
	p=&a;
	p=&b;
	p=&c;
	p=&d;
	printf("value of variable is :%d",*p);              // value of variable:4
	printf("\nvalue of variable  is :%d",*p++);         // address is pre increment but value is not print increment print by 4
	printf("\nvalue of variable is :%d",*p);            //the value is preincrement and print 3
	printf("\nvalue of variable  is :%d",*p--);          //the value 
	printf("\n value of variable is :%d",*p);            
	printf("\nvalue of variable  is :%d",*(++p));
	printf("\nvalue of variable is :%d",*p);              
	printf("\nvalue of variable  is :%d",*(--p));
	printf("\nvalue of variable is :%d",*p); 
	printf("\nvalue of variable  is :%d",++*(p));        // value is preincrement 
	printf("\nvalue of variable is :%d",*p);
	printf("\nvalue of variable  is :%d",--*(p));        // value is pre decrecrement
	printf("\nvalue of variable is :%d",*p); 
}