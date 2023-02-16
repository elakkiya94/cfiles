/*
	Name: v.elakkiya
	Date: 26/12/22
	Description: 2bit set
*/
#include<stdio.h>
int main()
{
	int num,set2bit;
	printf("enter the value");
	scanf("%d",&num);
	set2bit=num|(9<<2)                  // value<<position(starting number placed)
	printf("\n the bit set result %d",set2bit);
	}
