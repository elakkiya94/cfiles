/*
	Name: v.elakkiya  
	Date: 02/02/23 10:52
	Description: 
*/
#include<stdio.h>
struct institute          //structure tag
{
char staff_name;
double staff_age;
}manfree;                      //student =stucture variable            
int main()
{
//scanf("%s",&manfree.staff_name);	
manfree.staff_name='a';
manfree.staff_age=10;
printf("staff name is %c \n", manfree.staff_name);
printf("staff age is %d", manfree.staff_age);
printf("\n %d",sizeof (manfree));
//printf("\n %d",sizeof (institute));
}



