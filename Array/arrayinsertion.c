//insertion of array by elakkiya 11/1/23
#include<stdio.h>
int main()
{
int a[5],pos,i,n,value;
printf("enter the elements in array:");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the position");
scanf("%d",&pos);
printf("enter the  value");
scanf("%d",&value);
for(i=n-1;i>=pos-1;i--)
{
	a[i+1]=a[i];
}
a[pos-1]=value;
printf("final arry after inserting value is");
for(i=0;i<=n;i++)
{
	printf("\n%d",a[i]);
}

}