//write a c program to print the number of even numbers and odd numbers present within 1 to n
#include<stdio.h>
int main()
{
    int num;
    int even_count=0;
    int odd_count=0;
    printf("Enter an number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
        even_count++;
        }
        else
        {
        odd_count++;
        }
    }
    printf("count of even count is %d\n",even_count);
    printf("count of odd count is %d",odd_count);
}
