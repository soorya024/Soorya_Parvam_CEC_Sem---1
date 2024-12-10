#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n>=100 && n<=999 || n<=-100 && n>=-999)
    printf("the interger %d is a three digit number",n);
    else
    printf("the integer %d is not a three digit number",n);
}
