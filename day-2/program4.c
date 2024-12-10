#include<stdio.h>
 int main()
 {
     int i,num;
     printf("Enter a number:");
     scanf("%d",&num);
     printf("the odd number between 1 and %d\n",num);
     while(i<=num)
     {
        if(i%2==1)
        printf("%d \n",i);
        i++;
     }

     }

