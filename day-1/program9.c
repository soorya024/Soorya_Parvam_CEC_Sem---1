#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an character:");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("the character %c is a vowel",ch);
        }
        else
        {
            printf("the character %c is a consonent",ch);
        }
    }
    else
    {
        printf("%c is a invalid character",ch);
    }
}
