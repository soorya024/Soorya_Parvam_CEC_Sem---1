#include<stdio.h>
int main()
{
    int num;
    char ch='A';
    printf("Enter the integer value:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(ch<='Z')
                printf("%c",ch);
            ch++;
            if(ch>'Z')
            {
                ch='A';
            }
        }
        printf("\n");
}
}

