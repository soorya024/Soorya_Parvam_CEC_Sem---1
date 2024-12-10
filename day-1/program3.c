// program to check if two numbers are equal or not
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    if(n1==n2)
    printf("The given numbers %d and %d are equal",n1,n2);
    else
    printf("The given numbers %d and %d are not equal",n1,n2);
    }
