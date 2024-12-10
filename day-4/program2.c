//write a c program to print the reverse of user entered value
#include<stdio.h>
int main()
{
    int num,rev=0,rem ;
    printf("Enter the integer value:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("the reversed integer value is:%d",rev);
}
