//with arguement without return  subtraction 23/1/23
#include<stdio.h>
void sub(int[],int);                 //function declaration
int main()
{
	int a[10],i,n;
	printf("\n how many number to subtract:");      
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sub(a,n);                          // function call
}
void sub(int b[],int limit)                     // functin definition
 {
 	int subout,i;
 	subout=b[0];
  	for(i=1;i<limit;i++)
  	{
	subout=subout-b[i];
	printf("%d",subout);
    }
}