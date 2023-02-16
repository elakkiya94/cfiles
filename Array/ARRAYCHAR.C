//arrray character gettin program by elakkiya 11/1/23
#include<stdio.h>
int main()
{
	int n,i ;
	printf("enter the array elements");
	scanf("%d",&n);
	char a[n];
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	scanf(" %c",&a[i]);
    }
	for(i=0;i<n;i++)
	{
		printf(" %c",a[i]);
		
    }
	
}
