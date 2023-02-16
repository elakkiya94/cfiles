/*	Name:v.elakkiya
	Date: 28/01/23 10:23
	Description: string spiting using pointer
*/
#include<stdio.h>
char split(char *);                                    // function declaration
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
p=&string;
split(&string);                                       // function call
}
char split(char *q)                                  //functio definition
{  
  int i;
  char string1[20];
  printf("the 1st string");
  for(i=0;q[i-1]!=32;q++)
  
    printf("%c",*q);
  
  printf("\nthe 2st string ");
while(q[i-1]=32)
{
	printf("%c",*q);
	q++;
	if(q[i-1]=='\0')
	break;
 }

}







