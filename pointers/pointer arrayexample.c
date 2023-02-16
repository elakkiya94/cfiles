/*
	Name: 
	Copyright: 
	Author: 
	Date: 31/01/23 10:24
	Description: 
*/
#include<stdio.h>
int main()
{
int arr[7]={4,5,6,7,8,9,10}	;                     //
int *p;                                      //address hold
//&p=10;
printf("\n %d", sizeof (arr[0]));
printf("\n %d", sizeof (arr));
printf("\n %d", sizeof (&arr));
printf("\n %d",  (arr[6]));         //value of arr[6]=10
printf("\n %d",  (arr));
printf("\n %d", (&arr));
}
