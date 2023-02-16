//PROGRAM FOR ARRAY OF ASSENDING DESENDING 11/1/23
#include<stdio.h>
int main()
{
 int n,a[5],out,in,temp;
 printf("enter n");
 scanf("%d",&n);
 for(out=0;out<n;out++)
 scanf("%d",&a[out]);
{
   for(in=out+1;in<n;in++)
  {
	  if(a[out]>a[in])
	{
		temp=a[out];
		a[out]=a[in];
		a[in]=temp;
	}
 }
}
  for(out=0;out<n;out++)
 {
  printf("\n
  %d",a[out]);
 }
 
}