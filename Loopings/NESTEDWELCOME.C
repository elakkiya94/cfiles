// nested if simple program by elakkiya 2/1/23
#include<stdio.h>
int main()
{
    char  username;
	int passward,verification;
	printf("enter the user name");
	scanf("\n %c",&username);
	if(username='a')
    { 
      printf("enter the passward");
      scanf("%d",&passward);
	   if(passward=123)
	    {
		printf("enter the verification code");
		 scanf("\n %d",&verification);
          if(verification=456)
	 	{ 
             printf(" \n welcome ");
            }
           else
		  {
		  	printf("wrong verification code");
		  }
	     }
		 else
		 {
		 	printf("wrong passward");
 	   }
   }
        else
    
       {
    	printf("wrong user name");
		
       }
}
		   
	
	    
	






	
	
	


	
	
	