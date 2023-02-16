//reverse string without string handling function
#include<stdio.h>
int main()
{
	int i,j;
	char rev[10];
	printf("enter the string");
	gets(rev);
	for(i=0;rev[i];i++)
	{
	}
	printf("\n reverse string");
	for(i=i-1;i>=0;i--)
	printf(" %c",rev[i]);
}