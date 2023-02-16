 //function example program for addition,subtract,multiply,divide array numbers by elakkiya 23/1/23
#include<stdio.h>
void add(int);
int div(int);
int mul();
void sub();
int k;  
int main()
{  
 int result,output,i,n,val,sum=0,a[100],out;
 printf("select the operation ");
 printf("\n 1.addition 2.subtraction 3.multiplication 4.division");
 scanf("%d",output);
 main1:
 printf("enter the value :");
 scanf("%d",&k);
switch(output)
{
	case 1:
		{
		add(k);
		{
		int x;
		printf("enter 1 to continue 0 to exit");
		scanf("%d",&x);
		if(x==1)
		goto main;
		if(x==0)
		goto exit;
     }
	  }	
	  break;
	  
	  case 2:
	  	  { 
		   sub();
		  {
		  	int x;
		    printf("enter 1 to continue 0 to exit");
		    scanf("%d",&x);
		    if(x==1)
		    goto main;
		    if(x==0)
		    goto exit;
		   }
	     }
	  	 break;
	  	 case 3:
		{
		mul();
		{
		int x;
		printf("enter 1 to continue 0 to exit");
		scanf("%d",&x);
		if(x==1)
		goto main;
		if(x==0)
		goto exit;
     }
	  }	
	  break; 
	  
	  case 4:
		{
		div(k);
		{
		int x;
		printf("enter 1 to continue 0 to exit");
		scanf("%d",&x);
		if(x==1)
		goto main;
		if(x==0)
		goto exit;
        }
	  }	
	  break;
	  exit:
	default:
		{
		printf("wrong selection and exit");	
		}
  }
 }
                      //function declaration                         // function call
 void add(int val)                                 //function definition
{       int i,a[100],sum=0;
		for(i=0;i<k;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		printf("%d",sum);
   }
   int div(int val)                            //function declaration
{   
    int i,a[100],out;                                      //local decleration
	for(i=0;i<k;i++)
	 {
		scanf("%d",&a[i]);
 	 }
	out=a[0];                         // function call
	for(i=0;i<k;i++)
	{
   out=out/a[i];
    }
    printf("%d",out);
	  return a;
 }  
 int mul() 
     	{      
	    int out=1,i,a[100];
		
		
		for(i=0;i<k;i++)
		{
			scanf("%d",&a[i]);
			out=out*a[i];
		}
		printf("%d",out);
	   
	}
     void sub();                 //function declaration
    
   {
	int a[100],i,out;
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	//sub(a,n);                          // function call
    //int out,i;                 // functin definition
    out=a[0];
  	for(i=1;i<k;i++)
  	{
	out=out-a[i];
	printf("%d",out);
    }
 }        