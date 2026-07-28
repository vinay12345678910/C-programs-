#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    if(start >= end)
    {
        return;
    }
    
    int temp   = arr[start];
    arr[start] = arr[end];
    arr[end]   = temp;
    
    reverse(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    
    reverse(arr,0,4);  // start and end 
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}