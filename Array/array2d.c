//program find 2d array by elakkiya 12/1/23
#include<stdio.h>
int main()
{
	int i,j,n,a[10][10];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("\nenter the array elements\n");
	for(i=0;i<n;i++)
	{   
	for(j=0;j<n;j++)
	{
		
		scanf("%d",&a[i][j]);
	}
    }
    for(i=0;i<n;i++)
	{   
	for(j=0;j<n;j++)
	{
		
		printf("%d",a[i][j]);
	}
   
    printf("\n");
    }
}
