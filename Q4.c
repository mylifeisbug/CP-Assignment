//Write a program using symbolic constants.
#include<stdio.h>
int main()
{
    const float pi = 3.1416;
    float r,sum;
    
    printf("Enter area of circle: ");
    scanf("%f",&r);

    sum = pi*r*r;

    printf("Area of circle = %.2f",sum);





    return 0;
}