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
int a[3]={1,2,3},i;
int *ptr;
ptr=a;
printf("ptr:%u,&a[0]:%u,a:%u,&a:%u\n",ptr,&a[0],a,&a);  //starting adress (bae adress)
for(i=0;i<3;i++)
{
	printf("[index%d],adress:%u\n",i,(ptr+i));
}
printf("\n");
for(i=0;i<3;i++)
{
	printf("[index%d]value:%d%d%d%d\n",i,*(a+i),*(i+a),a[i]);
}
printf("\n");
}