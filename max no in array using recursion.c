#include<stdio.h>

int max(int arr[],int n)
{
    if(n == 1)
    {
        return arr[0];
    }
    
    int m = max(arr,n-1);
    
    if(arr[n-1] > m)
    {
        return arr[n-1];
    }
    return m;
}

int main()
{
    int arr[] = {5,9,7,2,1,4,6,3,8,10};
    
    printf("Maximum number = %d",max(arr,10));
    
    return 0;
}