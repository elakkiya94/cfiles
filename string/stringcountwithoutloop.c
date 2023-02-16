//program for count string without loop by elakkiya 20/1/23
 #include<stdio.h>
int main()
{    
     int i=0;
     char count[10]={"manfree"};
	puts(count);
	while(count[i]!='\0')
	{	
	i++;
	}
	printf("count %d",i-1);
}