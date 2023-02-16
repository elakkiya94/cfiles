/*
	Name:  v.elakkiya 
	Date: 27/12/22
	Description: program for bit clear
*/
#include<stdio.h>
int main()
{
int num,clear1bit;
printf("enter the value");
scanf("%d",&num);
clear1bit=num&(~(1<<5))
printf("\n the bit clear value of %d",clear1bit);
}
