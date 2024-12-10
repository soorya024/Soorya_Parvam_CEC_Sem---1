//wirte a c program to read the month number as input from user and check weather it is a valid month number or not
#include<stdio.h>
int main()
{
    int month;
    printf("Enter a month:");
    scanf("%d",&month);
    if(month>=1 && month<=12)
        printf("it is a valid month number");
    else
        printf("it is not a valid month number");
}
