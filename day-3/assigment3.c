//write a program to find qouint and reminder of 2 numbers using funtions
#include<stdio.h>
int main()
{
    void div(int num1,int num2)
    {
        printf("the quotient %d and %d is %d\n",num1,num2,(num1/num2));
        printf("the reminder %d and %d is %d\n",num1,num2,(num1%num2));
    }
    div(12,2);
    div(2,12);
    div(37,5);
}
