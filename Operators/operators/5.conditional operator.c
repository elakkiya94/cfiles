/*
	Name:      v.elakkiya 
	Date:      26/12/22
	Description: leaf year non leaf year using conditional opertor
*/
#include<stdio.h>
int main()
{ 
int year;
printf("enter the year");
scanf("%d",&year);
year%=4;
((year==0))? printf("\n leaf year"):printf("\n non leaf year");
}
	

