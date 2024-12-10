#include<stdio.h>
int main()
{
    char prog_lang[]="C programming\n";
    printf("%s",&prog_lang);
    //iteration of string using for loop
    for(int i=0;i<13;i++)
    {
        printf("%c\n",prog_lang[i]);
    }
}
