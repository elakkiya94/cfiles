/*
	Name:v.elakkiya
	Date: 03/02/23 13:40
	Description:struct typedef 
*/
#include<stdio.h>
struct institute     //student tag
{
int name[50];
int age;
};                      
int main()
{
struct institute student1,student2;  // student1,student2=structure variable	
scanf("%s%s",&student1.name,&student2.name);
printf("\nstaff name is %s %s", student1.name,student2.name);
scanf("%d%d",&student1.age,&student2.age);
printf("\nstaff age is %d %d", student1.age,student2.age);
}

