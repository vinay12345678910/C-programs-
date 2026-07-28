#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a       = *b;
    *b       = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    
    printf("Before Swap: %d %d\n",a,b);
    
    swap(&a,&b);
    
    printf("After  swap: %d %d",a,b);
    
    return 0;
}