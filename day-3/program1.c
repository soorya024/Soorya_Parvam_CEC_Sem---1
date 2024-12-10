//write a c program to print numvers from N to 1
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an number:");
    scanf("%d",&num);
    for(int i=num;i>=1;i--)
        printf("%d\n",i);
}
