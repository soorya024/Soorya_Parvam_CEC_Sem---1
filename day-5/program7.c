#include<stdio.h>
int main()
{
    int sub1,sub2,sub3;
    char name;
    printf("Enter student name:");
    scanf("%s",&name);
    printf("Enter first subject marks:");
    scanf("%d",&sub1);
    printf("Enter second subject marks:");
    scanf("%d",&sub2);
    printf("Enter third subject marks:");
    scanf("%d",&sub3);
    int total,avg;
    total=sub1+sub2+sub3;
    printf("total marks is %d\n",total);
    avg=(sub1+sub2+sub3)/3;
    printf("average is %d\n",avg);
    if(avg>=60)
    {
        printf("1st class");
    }
    else if(avg>=50)
    {
        printf("2nd class");
    }
    else if(avg>=35)
    {
        printf("pass class");
    }
    else
    {
        printf("fail");
    }
}
