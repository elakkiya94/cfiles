/*
	Name:  v.elakkiya
	Date: 26/12/22 
	Description: vote non voter using conditional opertor
*/
#include<stdio.h>
int main()
{
int age;
printf("enter the age");
scanf("%d",&age);
((age>=18))&&(age<=60)) ? printf("eligible o vote"): printf("not eligible");

}
