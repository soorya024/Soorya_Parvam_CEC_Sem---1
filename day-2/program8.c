//write a c program to print square values from 1 to 10
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an value:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d\n",i*i);
    }
}
