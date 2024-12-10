#include<stdio.h>
int main()
{
    //Declaring of array
    //dataype arrayname[size];
    int num_arr[10];
    //intializing array elements
    num_arr[0]=10;
    num_arr[1]=20;
    num_arr[2]=30;
    num_arr[3]=40;
    num_arr[4]=50;
    num_arr[5]=60;
    num_arr[6]=70;
    num_arr[7]=80;
    num_arr[8]=90;
    num_arr[9]=100;
    printf("array elements are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d,",num_arr[i]);
    }
}
