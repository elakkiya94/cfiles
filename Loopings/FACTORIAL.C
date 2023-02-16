//the factorial value program using for loop by elakkiya 4/1/23
#include<stdio.h>
int main()
{   
    int i,f,n;
	printf("enter the value");
	scanf("%d",&n);
	f=1;
	for(i=1;i<=n;i++)
	{
		f*=i;
		printf("\n%d",f);
	}
	printf(" \n factorial value of%d is %d",n,f);
}
