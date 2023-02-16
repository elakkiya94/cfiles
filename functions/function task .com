//function example program for addition,subtract,multiply,divide array numbers by elakkiya 23/1/23
#include<stdio.h>
int arithematic(int,int);
int main()
{
	int i,a[50],n,result;
    printf("enter the values");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);	
	}
   result=arithematic(n,a);//function call
printf("The result value%d",result);

}