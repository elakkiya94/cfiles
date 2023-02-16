/*
	Name: v.elakkiya  
	Date: 06/02/23 15:11
	Description:filehandling function write 
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
int age;
char name[50],college[50];
FILE *fptr;
fptr = fopen("program.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}
printf("Enter name: ");
scanf("%s",name); 
fprintf(fptr,"%c",name);  
printf("Enter age: ");
scanf("%d",&age); 
fprintf(fptr,"%d",age); 
printf("Enter college: ");
scanf("%c",&college); 
fprintf(fptr,"%c",college);        //write
fclose(fptr);
return 0;
}