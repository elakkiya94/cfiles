 //function without arguements without return by elakkiya 23/1/23        
#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	printf("enter the value of A & B :");
	scanf("%d%d",&a,&b);   //function calling
	add(a,b);
	return 0;
}
void add(int x,int y)
{
 int c;
 c=x+y;
 printf("\n total :%d",c);
 }
                         
                                                          
                                    