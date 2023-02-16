//pyramid star pattern by elakkiya 9/1/23
#include<stdio.h>
int main()
{
int i,j=0,s,n;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(s=0;s<=n-i-1;s++)
{
printf("  ");
}
for(j=1;j<=i*2+1;j++)

{
	printf("* ");
}
printf("\n");
}
}