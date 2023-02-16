/*
	Name: 
	Copyright: 
	Author: 
	Date: 31/01/23 11:02
	Description: 
*/
#include<stdio.h>
int main()
{
int arr[3][4]={{10,45,20,21},{30,21,77,23},{33,38,99,36}};
int(*ptr)[4];
ptr=arr;
printf("arr[1]:%d arr[2]:%d arr[3]:%d\n",ptr,ptr+1,ptr+2);
printf("arr[1]:%d arr[2]:%d arr[3]:%d\n",*ptr,*(ptr+1),*(ptr+2));
printf("arr[1]:%d arr[2]:%d arr[3]:%d\n",*(*(ptr)+1),*(*(ptr+1)+1),*(*(ptr+2)+1));
}
