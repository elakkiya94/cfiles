// pointer pdf example 1 by elakkiya 26/1/23
#include<stdio.h>
int main()
{
int m=10,n=5,l=0;
int*p1,*p2,*p3;
p1=&m;                            
p2=&n;
p3=&l;
printf("\np1=%d",p1);
printf("\np2=%d",p2);
l=*p1+*p2;
printf("\n p1+p2=%d\n",p3);
printf("*p1+*p2\n%d\n",l);
l=*p1-*p2;
printf("*p1-*p2\n%d\n",l);
p2--;
printf("p2--\n%d\n",p2);
p1++;
printf("p1++\n%d\n",p1);

}