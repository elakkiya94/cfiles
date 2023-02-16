//without return without argument by elakkiya 23/1/23
#include<stdio.h>
void add();                        //function declaration
int main()
{
	int k;
	label:
		printf("\n press 1 to continue press 0 to exit:");
		scanf("%d",&k);
		if(k==1)
		{
			add();                          // function call
			goto label;	
		}
}
void add()                                 //function definition
{
	int a[10],i,n,k,res;
	{
		printf("\n how many number to add:");
		scanf("%d",&n);
		res=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			res=res+a[i];
		}
		printf("%d",res);
	}
	
	}
                             
