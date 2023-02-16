  //the program for upper lower conversion of string  by elakkiya 21/1/23
#include<stdio.h>
int main()
{
	int i;
	char lower[i],value;
	printf("enter lower case character");
	scanf("%s",lower);
	for(i=0;lower[i];i++)
	{
	if(lower[i]>=65 &&lower[i]<=91)
	{
	value =lower[i]-32;
	printf("%c",value);
    }  
    
	else
	{
	printf("%c",lower[i]);
    }
  
  }
}

