#include<stdio.h>
int main()
{
    int num=144;
    //declaring pointer
    int *Pointer=&num;
    printf("num=%d\n",num);
    //addressing the pointer address
    printf("num=%p\n",num);
    printf("pointer=%p",Pointer);
    return 0;
}
