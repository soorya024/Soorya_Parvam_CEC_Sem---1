#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter an number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("%d is the summation of %d",sum,num);
}
