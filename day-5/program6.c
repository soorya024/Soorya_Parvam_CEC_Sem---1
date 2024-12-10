#include<stdio.h>
void print_Array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d,\n",arr[i]);
    }
}
int main()
{
    int Size;
    int Value;
    //declaration of array
    int Arr[Size];
    //initializing array elements
    printf("Enter the size of array:\n");
    scanf("%d",&Size);
    //initializing the aarray
    for(int i=0;i<Size;i++)
    {
        printf("Enter the element:\n");
        Value=scanf("%d",&Value);
        Arr[i]=Value;
    }
    print_Array(Arr,Size);
    free(Arr);
}
