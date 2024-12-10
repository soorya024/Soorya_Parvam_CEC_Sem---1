 //write a c program to read an integer value as input from the user and print the sum of digits present in that number
#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter the integer value:");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("The sum of digits is:%d",sum);
}
