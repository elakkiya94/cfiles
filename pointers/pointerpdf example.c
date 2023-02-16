//program for pointer pdf example by elakkiya 26/1/23
#include<stdio.h>
int main()
{
	int*p;
	int var=10;
	p=&var;
	printf("value of variable var is :%d",var);             //  value of var
	printf("\n value of variable var is :%d",*p);             //value of var(the value stored in  )
	printf("\n adress of variable var is :%p",&var);           // address of var stored in pointer
	printf("\n address of variable var is :%p",p);              // address of var stored in pointer
	printf("\n adress of varaiable p is :%p",&p);               // address of pointer
	return 0;
}