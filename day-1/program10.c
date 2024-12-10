#include<stdio.h>
int main()
{
    int num;
    int perfectsquare=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("%d is not a perfect square\n",num);
    }
    else
    {
        for(int i=0;i*i<=num;i++)
        {
            if(i*i==num)
            {
                perfectsquare=1;
                break;
            }
        }
    }
    if(perfectsquare)
    {
        printf("%d is a perfect square",num);
    }
    else
    {
        printf("%d is not a perfect square",num);
    }
}
