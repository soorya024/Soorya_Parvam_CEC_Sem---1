#include<stdio.h>
int main()
{
    char alp;
    int num;
    printf("Enter from(1-26):");
    scanf("%d",&num);
    if(num>=1 && num<=26)
    {

        alp='A'+(num-1);
        for(char i='A';i<=alp;i++)
        {
            for(char j='A';j<=alp;j++)
        {
            printf("%c\t",j);
        }
        printf("\n");
    }
}
}
