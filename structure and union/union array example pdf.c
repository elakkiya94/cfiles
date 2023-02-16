*/
#include<stdio.h>
union abd         //structure tag
{
int a;
char c[50];
} A1[3];                   //student =structure variable            
int main()
{
printf("enter the value");
 for(int i=0;i<=3;i++)
 {
 	scanf("%d %s",&A1[i].a),&A1[i].c);
 }
for(int i=0;i<=3;i++)
{
	printf("%d %s",A1[i].a,A1[i.c]);
}
}