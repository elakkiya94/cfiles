// count capital letter small,speci character
#include<stdio.h>
int main()
{
char string[100];
int i=0,upr=0,lwr=0,num=0,special=0;
printf("enter the string");
scanf("%s",string);
for(i=0;string[i];i++)
{ 
if(string[i]>=65 &&string[i]<=91)
{
	upr++;
}	
	
else if(string[i]>=97 && string[i]<=122)
{
	lwr++;
}	
else if(string[i]>=48 && string[i]<=57)
 {
	num++;
 }	
else 

	special++;
}
printf("upper count    :%d\n",upr);
printf("lower count    :%d\n",lwr);
printf(" number count  :%d\n",num);
printf(" special count :%d\n",special);
}