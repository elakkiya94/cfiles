/*
	Name:    v.elakkiya 
	Date: 
	Description: find grade if else
*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,avg;
printf("enter the marks");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
avg=(a+b+c+d+e)%100;
if(avg>=95&&avg<=100)
printf("\n S grade");
else if(avg>=94&&avg<=91)
printf("\n A grade");
else if(avg>=80&&avg<=89)
printf("\n B grade");
else if(avg>=70&&avg<=79)
printf("\n C grade");
else if(avg>=60&&avg<=69)
printf("\n D grade");
else if(avg>=50&&avg<=59)
printf("\n s grade");
}
