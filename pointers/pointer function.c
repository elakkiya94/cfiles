/*
	Name:v.elakkiya
	Date: 28/01/23 10:23
	Description: string spiting using pointer
*/
#include<stdio.h>
char s(char *);                                    // function declaration
int main()
{
int i;
char *p;
char string[20];
for(i=0;string[i-1]!=10;i++)
{
	scanf("%c",&string[i]);
}
string[i-1]='\0';
p= &string;
s(&string);                                       // function call
}
char s(char *q)                                  //functio definition
{  
 int i;
 printf("Enter the 1st string");
for(i=0;q[i-1]=32;i++)
{
	printf("%c",*q);
}
printf("Enter the 2st string");
while(q[i-1]=32)
{
	printf("%c",*q);
	i++;
	if(q[i-1]=='\0')
	break;
 }
}


