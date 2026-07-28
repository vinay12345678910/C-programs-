#include <stdio.h>

int count(int arr[],int n,int key)
{
    if(n == 0)
        return 0;
    
    int c = count(arr,n-1,key);
    
    if(arr[n - 1] == key)
    {
        return c + 1;
    }
    return c;
}

int main()
{
    int arr[] = {2,5,2,7,2,9};
    
    printf("Count = %d", count(arr,6,2));
    
    return 0;
}