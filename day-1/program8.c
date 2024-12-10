#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer:");
    scanf("%d",&num);
    if(num%2==0)
    printf("the entered number %d is even",num);
    else
    printf("the Entered number %d is odd",num);
}
