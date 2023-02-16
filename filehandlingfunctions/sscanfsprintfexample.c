/*
	Name: v.elakkiya
	Date: 07/02/23 12:23
	Description:sscanf,sprintf example program 
*/
#include<stdio.h>
#include<string.h>
int main()
/*{
int sno=5;
char name[50]={"student"};
float present=45.01;
char buffer[50];
sprintf(buffer,"%d %s %f",sno,name,present);
printf("%s",buffer);
}
*/
{
int sno;
char name[50];
float present;
char buffer[50]="1 abc 1.5";
sscanf(buffer,"%d %s %f",&sno,name,&present);
printf(" sno:%d\n name:%s\n present:%f\n", sno,name,present);
}
