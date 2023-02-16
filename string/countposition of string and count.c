//the string postion and count printing by elakkiya 21/1/23
#include<stdio.h>
int main()
{
int i,count=0;
char s[100],c;
printf("enter the string :");
gets(s);
printf("enter the character to be serch");
scanf("%c",&c);
for(i=0;s[i];i++)
{
	if(s[i]==c)
	{
		count++;
		printf("the position %d",i);
	}
}
printf("the count of character is %d",count);
}

