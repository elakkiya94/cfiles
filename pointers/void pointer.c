/*
	Name: v.elakkiya
	Date: 03/02/23 15:14
	Description: 
*/
#include<stdio.h>
int main()
{
void *ptr;
int a=10;
char b='c';
float d=4.2;
ptr=&a;
printf("\n%d",*(int*)ptr);
ptr=&b;
printf("\n%c",*(char*)ptr);
ptr=&d;
printf("\n%f",*(float*)ptr);
}
