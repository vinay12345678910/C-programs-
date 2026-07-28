#include <stdio.h>
int main()
{
    int marks[8] = {10,20,30,40,50,60,1,1000};
    int i,max;
    
    max = marks[0];
    
    int size = 8;
    
    for (i = 1 ; i < size; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }
    printf("max No: %d",max);
}