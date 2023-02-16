/*
	Name:    v.elakkiya
	Date: 26/01/22
	Description: swaping without temporary variable
*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter the alue a,b");
scanf("%d%d",&a,&b);
a+=b;
b=a-b;
printf("\n the swapig value of b %d",b);
a-=b;
printf("\n the swap value of a %d",a);
}
