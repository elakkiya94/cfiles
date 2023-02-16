/*
	Name: 
	Copyright: 
	Author: 
	Date: 31/01/23 11:02
	Description: 
*/
#include<stdio.h>
int main()
{
int a[3]={1,2,3},i,j,b[3]={4,5,6},c[3]={7,8,9};
int *ptr[3];
ptr[0]=&a;
ptr[1]=&b;      
ptr[2]=&c;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

	printf("[index%d], %d\n ",i,(ptr[i]+j));
	printf("[index%d], %d\n ",i,*(ptr[i]+j));
}
printf("\n");
}
}


