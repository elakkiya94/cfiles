/*
    Name:    v.elakkiya 
	Date: 06/02/23 11:58
	Description: filehandling example program
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
int num,num1,num2;
FILE *fptr;
fptr = fopen("program.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}
printf("Enter num: ");
scanf("%d",&num); 
fprintf(fptr,"%d",num);  
printf("Enter num: ");
scanf("%d",&num1); 
fprintf(fptr,"%d",num1); 
printf("Enter num: ");
scanf("%d",&num2); 
fprintf(fptr,"%d",num2);        //write
fclose(fptr);
return 0;
}