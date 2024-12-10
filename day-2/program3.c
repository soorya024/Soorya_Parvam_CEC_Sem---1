#include<stdio.h>
 int main()
 {
     int i,num;
     printf("Enter a number:");
     scanf("%d",&num);
     printf("the odd number between 1 and %d\n",num);
     for(i=1;i<=num;i++)
      {
          if(i%2==1)
            printf("%d \n",i);
      }
     }

