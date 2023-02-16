#include<stdio.h>
int main()
{
	int month;
	printf("enter the month 1 to 12");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			{
				printf("january");
			}
			break;
			
		case 2:
		{
				printf("febrary");
			}	
		break;
	case 3:
		{
			printf("march");	
		}
		break;
		case 4:
			{
					printf("april");
			}
			break;
			case 5:
				{
						printf("may");
					}
					break;
	case 6:
	{
			printf("june");
					}				
					break;
	case 7:	
	{
			printf("july");
				}			
					break;
					
	case 8:
	{
			printf("augest");
		
}
break;
case 9:
	{
			printf("september");
		
	}
	break;
	 case 10:
	 	{
	 			printf("october");
		 }
		 break;
		 case 11:
		 	{
		 			printf("november");
			 } 
			 break;
		case 12:
			{
					printf("december");
			}
			break;

}
}