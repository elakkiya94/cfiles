//deletion of array by elakkiya 11/1/23
#include<stdio.h>
int main()
{
int a[5],pos,i,n;
printf("enter the elements in array:");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the position to be deleted");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
{
	a[i]=a[i+1];
}
printf("final  new array is");
for(i=0;i<n-1;i++)
{
	printf("\n%d",a[i]);
}

}