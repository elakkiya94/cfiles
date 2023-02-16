/*
	Name: v.elakkiya  
	Date: 02/02/23 
	Description: structure padding example
*/
#include<stdio.h>
union abd         //structure tag
{
int a;
char c[50];
float d;
} A1;                   //student =structure variable            
int main()
{
	printf("%d",sizeof(A1));
	printf("enter value of a");
	scanf("%d",&A1.a);
	printf("enter name of c");
    scanf("%s",&A1.c);
    printf("enter value of d");
	scanf("%f",&A1.d);
	printf("%d %s %f",A1.a,A1.c,A1.d);
}