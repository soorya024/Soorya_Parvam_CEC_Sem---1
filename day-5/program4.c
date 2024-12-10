//write a program to declare and create an array of size 10 and acces the array elements
#include<stdio.h>
int main()
{
    int array[10];
    int i;
    for(int i=0;i<10;i++)
    {
        array[i]=i+1;
    }
    printf("array elements are:\n");
    for(int i=0;i<10;i++)
    {
        printf("element at index %d:%d\n",i,array[i]);
    }

}
