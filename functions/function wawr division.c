 // with argument with return  division by elakkiya 23/1/23
#include<stdio.h>
int div(int[],int);                              //function declaration
int main()                    
{   int result,a[10],i,n;   ///local decleration                                 

	printf("\n how many number to divide:");      
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	result=div(a,n);                          // function call
	printf("%d",result);
}                                                 // function definition
int div(int b[], int limit)                                           
 {                                                   
  	int divout,i;
  	divout=b[0];
  	for(i=1;i<limit;i++)
	divout=divout/b[i];
	return divout;
 }