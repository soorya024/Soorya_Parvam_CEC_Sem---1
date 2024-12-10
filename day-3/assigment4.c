//write a c program to print the multiplication table of n using funtions by taking the dinamic input from the user
#include<stdio.h>
int main()
{
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    void table(int num1)
    {
        printf("%d X %d=%d\n",num1,1,(num1*1));
        printf("%d X %d=%d\n",num1,2,(num1*2));
        printf("%d X %d=%d\n",num1,3,(num1*3));
        printf("%d X %d=%d\n",num1,4,(num1*4));
        printf("%d X %d=%d\n",num1,5,(num1*5));
        printf("%d X %d=%d\n",num1,6,(num1*6));
        printf("%d X %d=%d\n",num1,7,(num1*7));
        printf("%d X %d=%d\n",num1,8,(num1*8));
        printf("%d X %d=%d\n",num1,9,(num1*9));
        printf("%d X %d=%d\n",num1,10,(num1*10));

    }
    table(num1);
}
