/*
	Name: v.elakkiya 
	Date: /12/22 
	Description:bit toggle  
*/
#include<stdio.h>
int main()
{
int num,toggle;
printf("enter the value");
scanf("%d",&num);
toggle=10^(1<<3); ;                                           // toggle bit = a^1<<postion
printf("\n toggle value %d",toggle);
}
