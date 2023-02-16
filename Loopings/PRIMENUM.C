//forloop  prime numbers programs by elkkiya 6/1/23
#include<stdio.h>
int main()
{
int n,i,l,a;
printf("enter the total  numbers");
scanf("%d",&a);
printf("enter the first number n is");
scanf("%d",&n);
l=n;
for(i=1;i<=a-1;i++)
 {
	printf("enter another number n is");
	scanf("%d",&n);
	if(n>l)
	
      l=n;
}
    printf("\n the greastest number is %d",l);
      


}