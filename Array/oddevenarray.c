//odd even program for arry by elakkiya 12/1/23
#include<stdio.h>
int main()
{
	int i,n,a[20];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements \n");
	{
		scanf("%d",&a[i]);
	}
	printf("even number in array \n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("%d",a[i]);
	}
	printf("odd number in array \n");
	for(i=0;i<n;i++)
	{
	if(a[i]%2!=0)
	printf("%d",a[i]);
    }
}