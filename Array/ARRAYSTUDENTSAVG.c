//array program for getting number 11/1/23
#include<stdio.h>
int main()
{
	int n,i,sum=0,sum1,sum2;
	float avg1,avg2;
	printf("\nenter the number of array elements");
	scanf("%d",&n);
	printf("enter the name of student1\n :");
	char b[5];
	for(i=0;i<5;i++)
	{
		scanf("%c",&b[5]);
    }
    printf("enter the marks");
    int mark[n];
    for(i=0;i<n;i++)
	{
	printf(" \n welcome %d",n);
	scanf("%d",&mark[i]);
    }
	for(i=0;i<n;i++)
     
	 {
	 sum1=sum+mark[i];
     }
	avg1=sum1/5;
 
	printf(" \nstudent1avg%d",avg1);
  
	printf("enter the name of student2\n :");
	
   char c[5];
   for(i=0;i<5;i++)
	{
		scanf("%c",&c[i]);
	}
	printf("enter the marks");
	for(i=0;i<n;i++)
	{
	scanf("%d",&mark[i]);
    }
    for(i=0;i<n;i++)
     
	 {
	 sum2=sum+mark[i];
     }
	avg2=sum2/5;
 
	printf("\nstudent2avg%d",avg2);
  
} 