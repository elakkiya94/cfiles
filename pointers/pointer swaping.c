//pointer swaping program by elakkiya 26/1/23
#include<stdio.h>
int main()
{
int a=10,b=5,temp;
int*p1,*p2;
p1=&a;
p2=&b;
printf("before swaping of *p1,*p2 %d,%d:",*p1,*p2);
temp=*p1;
*p1=*p2;
*p2=temp;
printf("after swaping *p1,*p2 %d,%d:",*p1,*p2);
}


