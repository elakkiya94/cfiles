//the program for upper lower conversion of string  by elakkiya 21/1/23
#include<stdio.h>
int main()
{
	int i;
	char upper[i],value;
	printf("enter upper case character");
	scanf("%s",upper);
	for(i=0;upper[i];i++)
	{
	if(upper[i]>=65 &&upper[i]<=91)
	{
	value =upper[i]+32;
	printf("%c",value);
    }  
    
	else
	{
	printf("%c",upper[i]);
    }
  
  }
}
	