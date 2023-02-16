#include<stdio.h>
int main()
{
 int a[10]={1,2,3,4},b[10]={1,2,3,4},c[10]=0,i;
 int*p;
 p=&a;
 p=&b;
 p=&c;
 printf("\nthe adress of a,b,c %d,%d,%d",&a,&b);
 printf("\nthe value of a,b,c%d,%d,%d",*p,*p++);                        // pointer vale increment and printed


	//int a[5],b[5],c=0,i,j;
	for(i=0;i<5;i++)
	{
	scanf("%d%d",&a[i],&b[j]);
	for(i=0;i<5;i++)
	{
		c[i]=c[i]+a[i]+a[j];
		
	}
}
	printf("%d",c[i]);		
}