/*
	Name: v.elakkiya 
	Date: 06/02/23 
	Description: filehandling function read write task
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int ID;
char name[50];
float salary;
char section;
char company[50];
char location[50];
FILE *fptr;
fptr=fopen("employee.txt","w");
if(fptr==NULL)
{
	printf("error");
	exit(1);
}
puts("enter the name:");
gets(name);
printf("enter the salary:");
scanf("%f",&salary);
getchar();
puts("enter the company:");
gets(company);
printf("enter ID:");
scanf("%d",&ID);
getchar();
puts("enter the location");
gets(location);
printf("enter the section");
scanf(" %c",&section);
fprintf(fptr,"%s\n%f\n%s\n%d\n%s\n%c",name,salary,company,ID,location,section);
fclose(fptr);
fptr=fopen("employee.txt","r");
if(fptr==NULL)
{
	printf("error");
	exit(1);
}
int id;
char na[50];
float sa;
char sec;
char com[50];
char loc[50];
fgets(na,50,fptr);
puts(na);
fscanf(fptr,"%f",&sa);
printf("%f\n",sa);
fputc(com,fptr);
fgets(com,50,fptr);
puts(com);
fscanf(fptr,"%d",&id);
printf("%d\n",id);
fputc(loc,fptr);
fgets(loc,50,fptr);
puts(loc);
fscanf(fptr,"%c",&sec);
printf(" %c",sec);
fclose(fptr);
}