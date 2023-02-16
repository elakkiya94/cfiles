/*
	Name:      v.elakkiya 
	Date: 27/01/23 10:41
	Description: the function call call by reference in pointer
*/
#include<stdio.h>
char name(char *);                           


// function declaration
int main()
{
  char a[10] ={"manfree"};
  char *p;
  p=&a;
name(a);                                       // function call
  } 
                                             //   function definition
  char name(char *b)                        //   no return
	{
     while(*b!='\0')
	{  
	printf("%c",*b);
		*b++;
	}
}