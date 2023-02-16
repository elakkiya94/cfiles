//string reverse printing without filehandling function by elakkiya 20/1/23
#include<stdio.h>
int main()
{   
     int i,j;
	char string[20],reverse[20];
    printf("enter a string");
    scanf("%s",string);
	i=0;
	while(string[i]!='\0')
	i++;
	i--;
	j=0;
	while(i>=0)
	{
		reverse[j]=string[i];
		j++;
		i--;
	}
	reverse[j]='\0';
	printf("reversestring is %s",reverse);
}
