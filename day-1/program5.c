#include<stdio.h>
int main()
{
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
    if(n%3==0 && n%5==0)
    printf("it is a multiple of 3 and 5");
    else
    printf("it is not a multiple of 3 and 5 ");
}
