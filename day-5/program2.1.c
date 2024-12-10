//program to print prime numbers 1 to n
#include<stdio.h>
int main()
{
int num,i,j;
int isprime;
printf("Enter an number:");
scanf("%d",&num);
printf("Prime numbers between 1 and %d is\n",num);
for(i=2;i<=num;i++)
{
    isprime=1;
    for(j=2;j*j<=i;j++)
    {
        if(i%j==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        printf("%d\n",i);
    }
}
}

