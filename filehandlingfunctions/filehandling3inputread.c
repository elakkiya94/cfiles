/*
	Name: v.elakkiya 
	Date: 06/02/23 12:27
	Description:filehandling fopen()readfunction 
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
int age;
char name[50],college[50];
FILE *fptr;
fptr = fopen("filereadwrite.txt","w");
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
scanf("%s",college); 
fprintf(fptr,"%s",college);        //write read
fclose(fptr);
printf("\nEnter name: ");
fscanf(fptr,"%s",name); 
//fgets(name,50,fptr);
printf("%s",name); 
printf("\nEnter age: ");
fscanf(fptr,"%d",&age); 
printf("%d",age); 
printf("\nEnter college: ");
fscanf(fptr,"%s",&college);
//fgets(college,50,fptr);
printf("%s",college);        //read
fclose(fptr);
fptr=fopen(filereadwrite.txt","r");
if(fptr==NULL)
{
  printf()
}
return 0;
}