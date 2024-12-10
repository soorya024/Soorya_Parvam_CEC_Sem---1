 //Write a c program to read the input for num as integer and print the numbers from 1 to num
 #include<stdio.h>
 int main()
 {
     int i,num;
     printf("Enter a number:");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
         printf("%d\n",i);
     }
 }
