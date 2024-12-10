#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n>=-9 && n<=9)
    printf("the interger %d is a digit",n);
    else
    printf("The integer %d is a number",n);
}
