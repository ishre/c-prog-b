/*
WAP to develop a menu-driven Student 
Grade and Result Management System using 
switch and goto 
*/


#include <stdio.h>


int main(void)
{
    float p, c, m, percent;

    printf("Enter your Physics Marks: ");
    scanf("%f", &p);
    printf("Enter your Chemistry Marks: ");
    scanf("%f", &c);
    printf("Enter your Maths Marks: ");
    scanf("%f", &m);
    
    float sum = p + c + m;

Menu:
    printf("Avg - 1\n");
    printf("Total - 2\n");
    printf("Percentage - 3\n");
    printf("Exit - 0\n");

    int userInput;
    printf("Enter your choice: ");
    scanf("%d", &userInput);
    
    if(userInput == 1) goto Average;
    if(userInput == 2) goto Total;
    if(userInput == 3) goto Percentage;
    if(userInput == 0) return 0;

    goto Menu;

Average:
    printf("Your Average is: %.2f\n", sum/3);
    goto Menu;

Total:
    printf("Your Total is: %.2f\n", sum);
    goto Menu;

Percentage:
    percent = (sum/120)*100;
    printf("The percentage is: %.2f\n", percent);
    goto Menu;
    
    return 0;
}