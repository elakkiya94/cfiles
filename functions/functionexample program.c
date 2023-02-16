//program for function program by elakkiya 23/1/23
/* with arguements with return value*/
#include<stdio.h>
int manfree(int,int);         //fuction declaration syntax:function-type function-name(parameter(list of arguments) //function header
int main()
{                                                              // main function
     int result;
     printf("with argument with return");                  // definition
     result=manfree(5,6);
     printf("%d",result);
     
}
    int manfree(int y,int m)                                  // function call
    {                                                       // function name(listof arguemnts)
    	int c=0;                                          
    	c=y+m;                                           
    	return c;                                         // function call
	}
	 