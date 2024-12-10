#include<stdio.h>
int main()
{
    int num;
    printf("Enter the integer value:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
            for(int j=1;j<=num;j++)
        {
            if(j%2!=0)
            {
                printf("%c",(96+j));
            }

            else
        {
                printf("*");

        }
        }
        printf("\n");
    }


}
