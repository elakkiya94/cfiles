/*
	Name: v.elakkiya
	Date: 07/02/23 12:23
	Description:sprintf example program 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char location[50];
char filename[50];
char format[50];
char buffer[50];
char name[50];
FILE *fptr;
printf("enter the location");
scanf("%s",&location);
printf("enter the name");
scanf("%s",&filename);
printf("enter the format");
scanf("%s",&format);
sprintf(buffer,"%s%s%s",location,filename,format);
printf("%s",buffer);
fptr=fopen(buffer,"w");
if(fptr == NULL)
{ 
printf("Error!");
exit(1);
}
printf("Enter the name");
scanf("%s",&name);
fprintf(fptr,"%s",name);

fclose(fptr);
}