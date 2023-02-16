//armstrong program  by elakkiya 6/12/23
#include<stdio.h>
int main()
{
int n,r,sum=0,n1;
printf("enter the value");
scanf("%d",&n);
n1=n;
while(n>0)
{
	r=n%10;
	sum=sum+r*r*r;
	n=n/10;

}
 if(n1==sum)
 printf("armstrong number");
 else 
 printf("not armstrong");
}