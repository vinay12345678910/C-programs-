#include<stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int b,i,found = 0;
    
    printf("Enter no u want to search: ");
    scanf("%d",&b);
    
    int size = 10;
    
    for(i = 0 ; i < size ; i++)
    {
        if(b==a[i])
        {
            printf("Required number is found in the array\n");
            printf("a[%d] here the required no is stored",i);
            found = 1;
        }
    }
    if(found == 0)
    {
        printf("The required no is not found in the array");
    }
    return 0;
}