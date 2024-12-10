#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n>=10 && n<=99 || n<=-10 && n>=-99)
    printf("the interger %d is a two digit number",n);
    else
    printf("the integer %d is not a two digit number",n);
}
