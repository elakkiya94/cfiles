//multiplication table program using for loop by elakkiya 4/1/23
#include<stdio.h>
int main()
{
int i,n;
printf("enter the value" );
scanf("%d",&n);
for(i=1;i<=10;i++)
{
	printf("\n%d*%d=%d",i,n,i*n);
}
}