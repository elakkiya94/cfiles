/*
	Name: v.elakkiya 
	Date: 06/02/23 12:27
	Description:filehandling fopen()write and read function 
*/
#include <stdio.h>
#include<stdlib.h>
int main()

{
int age;
char name[50],college[50];
FILE *fptr;
fptr = fopen("studentprogram.txt","w");                
if(fptr == NULL)
{ 
printf("Error!");
exit(1);
}
printf("\nEnter name: ");
scanf(" %c",&name);
fprintf(fptr,"%c",name);
printf("\nEnter age: ");
scanf("%d",&age);
fprintf(fptr,"%d",age); 
printf("\nEnter college: ");
scanf(" %c",&college);
fprintf(fptr," %c",college); 
fclose(fptr);
}
