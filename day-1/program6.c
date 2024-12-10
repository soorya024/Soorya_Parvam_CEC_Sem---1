#include<stdio.h>
int main()
{
    int n;
    printf("Enter age:");
    scanf("%d",&n);
    if(n>=18 && n<=100)
    printf("the person is eligible to vote");
    else
    printf("the person is not eligible to vote");
}
