/*
	Name:    v.elakkiya 
	Date: 
	Description: find number of digit(1 to 6) if else
*/
#include<stdio.h>
int main()
{
int long value;
printf("enter the value");
scanf("%ld",&value);
if(value>=0&&value<10)
printf("\n 1 digit");
else if(value>=10&&value<100)
printf("\n 2 digit");
else if(value>=100&&value<1000)
printf("\n 3 digit");
else if(value>=1000&&value<10000)
printf("\n 4 digit");
else if(value>=10000&&value<100000)
printf("\n 5 grade");
else if(value>=100000&&value<100000)
printf("\n 6 digit");
}
