/*  Name: v.elakkiya 
	Date: 27/01/23 10:41
	Description:  get the string using the function call call by reference in pointer
*/
#include<stdio.h>
char name(char*);                                  // function declaration
int main()
{
  char a[10]={'m','a','n','f','r','e','e','\0'};
  char *p;
  p=&a[10];
  name(a);                                    // function call
  printf("%c",*p);                         
  }                                      //function definition
  char name(char*batch[10])
	{
	char *p1;
	p1=&batch[10];
	batch[10]=*p1;
	return batch;
 }
	