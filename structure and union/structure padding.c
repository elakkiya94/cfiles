/*
	Name: v.elakkiya  
	Date: 02/02/23 
	Description: structure padding example
*/
#include<stdio.h>
//#pragma pack(1)
struct abd         //structure tag
{
int a;
char b;
float c;
double d;
} A1;                   //student =structure variable            
int main()
{
	printf("%d",sizeof(A1));
	printf("\n%d",sizeof(A1.a));
	printf("\n%d",sizeof(A1.b));
	printf("\n%d",sizeof(A1.c));
	printf("\n%d",sizeof(A1.d));

}