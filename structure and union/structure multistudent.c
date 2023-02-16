/*
	Name:v.elakkiya
	Date: 02/02/23 12:04
	Description: 
*/
#include<stdio.h>
struct institute     // structure tag
{
int i;
int name[50];
int age;
};                      
int main()
{
	struct institute student[20];       //student =stucture variable
for(int i=0;i<3;i++)
{
  scanf("%s",&student[i].name);
  scanf("%d",&student[i].age);
}
for(int i=0;i<3;i++)
{
printf("\nstaff name is %s", student[i].name);
printf("\nstaff age is %d ",student[i].age);
}
}

