#include<stdio.h>
int main()
{
    int num;
    printf("Enter the integer value:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
            for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                printf("0");
            }
        }
        printf("\n");
    }


}
