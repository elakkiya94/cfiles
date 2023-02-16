/*
	Name: v.elakkiya
	Date: 13/02/23 12:05
	Description: 
*/
#include <stdio.h>
/*
// macro with parameter
#define AREA(l, b) (l * b)
int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	printf("Area of rectangle is: %d", area);

	return 0;
}*/
 
#include<stdio.h>  
#define MARKS 50  
int main()  
{  
    #if(MARKS <= 100 && MARKS >= 80)  
        printf("GRADE A\n");  
    #elif(MARKS <= 79 && MARKS >= 60)  
        printf("GRADE B\n");  
    #elif(MARKS <= 59 && MARKS >= 40)  
        printf("GRADE C\n");  
    #elif(MARKS <= 39 && MARKS >= 30)  
        printf("GRADE D\n");  
    #else  
        printf("Please retake the test!\n");  
    #endif // MARKS  
  
    printf("Your Result\n");  
  
    return 0;  
}