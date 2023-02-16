//without return without argument addition by elakkiya 23/1/23
#include<stdio.h>
void add();                        //function declaration
int main()
{
	add();                          // function call
			
		
}
void add()                                 //function definition
{       int n,i,a[10],result;
		printf("\n how many number to add:");
		scanf("%d",&n);
		result=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			result=result+a[i];
		}
		printf("%d",result);
	   
	}
                             
