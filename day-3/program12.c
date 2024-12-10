//write a c program for basic calulater using funtions
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
    printf("Enter the valve of num2:");
    scanf("%d",&num2);
    void calulate(int x,int y)
    {
        printf("summation:%d\n",(x+y));
        printf("difference:%d\n",(x-y));
        printf("product:%d\n",(x*y));
        printf("quotient:%d\n",(x/y));
        printf("remainder:%d\n",(x%y));
    }
    calulate(num1,num2);
}
