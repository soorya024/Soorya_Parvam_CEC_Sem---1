//write a c program to print the summation of even numbers and odd numbers from 1 to n
#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int evensum=0;
    int oddsum=0;
    printf("Enter a value:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            evensum=evensum+i;
        }
        else
        {
            oddsum=oddsum+i;
        }
    }
    printf("value of evensum is%d\n",evensum);
    printf("value of oddsum is %d",oddsum);

}
