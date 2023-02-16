//program for transpose matrix 18/1/23
#include<stdio.h>
int main()
{
	int i,j,n,a[2][2],b[2][2],c[2][2];
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
	c[i][j]=a[i][j];	
    }
   }
   printf("\n the transpose matrix is\n");
    for(i=0;i<n;i++)
	{   
	for(j=0;j<n;j++)
	{
	     printf("%d ",c[j][i]); 
    }
    printf("\n"); 
   }
}