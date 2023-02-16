/*
	Name:v.elakkiya
	Date: 02/02/23 12:04
	Description: 
*/
#include<stdio.h>
union office     // structure tag name
{
int i;
char name[50];
int  ID;
float salary;
int experience;
};                      
int main()
{
union office employee[20]; 
union office *ptr=&employee
;                             //student =stucture variable
for(int i=0;i<2;i++)
{ 

  scanf("%s",&employee[i].name);
  scanf("%d",&employee[i].ID);
  scanf("%f",&employee[i].salary);
  scanf("%d",&employee[i].experience);
  
}
for(int i=0;i<2;i++,ptr++)
{
printf("\nstaff name is %s",ptr->name);         //or  dot model= (*ptr).name
printf("\nstaff  ID is %d ",ptr->ID);
printf("\nstaff  salary is %f ",ptr->salary);
printf("\nstaff  experience is %d ",ptr->experience);
}
}