#include<stdio.h>
int main()
{
    int num;
    printf("Enter the4 value of num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            printf("%c\t",(64+i));
        }
        printf("\n");

    }
}
