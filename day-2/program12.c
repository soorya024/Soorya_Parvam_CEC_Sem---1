//write a c program to read an integer value from the user and find the count of digits present in that number
#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("Enter an value:");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("number of digits is %d",count);
}
