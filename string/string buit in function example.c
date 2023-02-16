//the string length built in functio by elakkiya 21/1/23
#include<stdio.h>
#include<string.h>
int main()/*
{   
    int l;
	char n[10];
	printf("enter the string");
	scanf("%s",n);
    l=strlen(n);
	printf("%d",l);
}*/
{
	char s1[10],s2[10];
	printf("enter the sring1");
	scanf("%s",s1);
	printf("enter the string2");
	scanf("%s",s2);
	strcpy(s1,s2);
	printf("%s",s2);
}
	
