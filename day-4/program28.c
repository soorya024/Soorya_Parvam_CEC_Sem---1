#include<stdio.h>
int main()
{
    int marks[3];
    printf("physics:");
    scanf("%d",&marks[0]);
    printf("chemistry:");
    scanf("%d",&marks[1]);
    printf("maths:");
    scanf("%d",&marks[2]);
    printf("physics=%d\n",marks[0]);//phy
    printf("chemistry=%d\n",marks[1]);//chem
    printf("math=%d\n",marks[2]);//math
}
