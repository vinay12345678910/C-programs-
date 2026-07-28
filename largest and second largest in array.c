#include <stdio.h>
int main()
{
    int a[]  = {10,20,30,40,50,60,70,80,900,1000};
    int size = 10;
    
    int largest        = a[0];
    int second_largest = a[0];
    
    int i;
    for(i = 1 ; i < size ; i++)
    {
        if(a[i] > largest)
        {
            second_largest = largest;
            largest        = a[i];
        }
        else if(a[i] > second_largest)
        {
            second_largest = a[i];
        }
    }
    printf("Largest = %d\n",largest);
    printf("Second largest = %d",second_largest);
    
    return 0;
}