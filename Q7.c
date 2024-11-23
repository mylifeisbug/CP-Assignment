//Write a C program where you declare variables as constant and attempt tochange their values. Explain the output
#include<stdio.h>
int main()
{

   const int a;
    a=5;

   printf("Constant of Integer Before: %d",a);

   a=2;

   printf("Constant of Integer After: %d",a);




    return 0;
}