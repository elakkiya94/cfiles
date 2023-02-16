/*
	Name: v.elakkiya
	date:29/12/22
	Description:palindrom or not  using if 
*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the value");
scanf("%d",&a);
f=a;
b=a%10;
a=a/10;
c=a%10;
a=a/10;
e=(b*100)+(c*10)+(d*1);
if(f==e)
{
	printf("\n given number is palindrome");	
}
if(f!=e)
{
	printf("\n given number is not palindrome");	
}





}
