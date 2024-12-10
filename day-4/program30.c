#include<stdio.h>
int main()
{
    int num;
    char ch='a';
    printf("Enter the integer value:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(ch>='a')
                printf("%c",ch);
            ch++;
            if(ch>='z')
            {
                ch='a';
            }
        }
        printf("\n");
}
}


