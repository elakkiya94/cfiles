//program for greater smaller number by elakkiya 11/1/23
#include<stdio.h>
int main()
{
	int n,i,big,small;
	printf("enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    big=a[0];
     for(i=0;i<n;i++)
	  {
		if(a[i]>big)
		{
         big =a[i];
	    }
	    small=a[0];
		if(a[i]<small)
		{
		small= a[i];
	    }
    }
		printf("\ngreatest number is %d",big);
		printf("\nsmallest number is %d",small);
    }