/*
	Name: v.elakkiya
	Date: 29/12/22 
	Description: greater smaller number using if else
*/
#include<stdio.h>
int main()
{
int num1,num2,num3,val;
printf("\n enter the 3 value");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2)
{
	val=num1;
}
else  val=num2;
  
 if(val<num3)
{
	val=num3;
}
printf("\n the greater is %d",val);
 if(val<num1)
{	
val=num2;
}
else val=num1;
if(val>num3)
{
	val=num3;
}
printf("\n smallest number is %d",val);
}
