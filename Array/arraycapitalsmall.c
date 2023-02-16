//program for find great small letter in given arry by elakkiya 12/1/23
#include<stdio.h>
int main()
{
     int n;
	 char i,a[20];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements \n");
	{
		scanf("%",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 if(a[i]>='A'&&a[i]<='Z')
	 {
	 	printf("capital leters %c",a[i]);
	 }
	 if(a[i]>='a'&&a[i]<='z')
	 {
	 	printf("small leters %c",a[i]);
	 }
	}
	
}