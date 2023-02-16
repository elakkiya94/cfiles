/*
	Name:  Elakkiya
	Date: 26/01/23 
	Description: add the 3 value in one pointer
	
*/
#include<stdio.h>
int mul(int * ,int *);
int main()
{
 int i,a[5]={1,2,3,4},b[5]={1,2,3,4};
 int*p;
 p=&a;
 p=&b;
 mul(&a,&b);
}
int mul(int *x,int *y)
{
	int val=0,a,b,a1,a2,a3,b1,b2,b3;
	a=*x;
	a1=*++x;
	a2=*++x;
	a3=*++x;
	b=*y;
	a1=*++y;
	a1=*++y;
	a1=*++y;
	printf("\n%d",((a*b)+(a1*b2)));
	printf("\n%d",((a*b1)+(a1*b3)));
	printf("\n%d",((a2*b)+(a3*b2)));
	printf("\n%d",((a2*b1)+(a3*b3)));
}
	
	