#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(i%2!=0)
            {printf("%c\t",(64+j));
            }
            else
                {
                printf("0\t");
                }
        }
        printf("\n");

    }
}

