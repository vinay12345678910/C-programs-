#include<stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    int b,c,i,found = 0;
    int size = 10;
    
    printf("Enter no u want to search: ");
    scanf("%d",&b);
    
    
    for(i = 0 ; i < size ; i++)
    {
        if(b==a[i])
        {
            printf("Required number is found in the array\n");
            printf("a[%d] here the required no is stored\n\n",i);
            found = 1;
        }
    }
    if(found == 0)
    {
        printf("The required no is not found in the array\n\n");
    }
    printf("Do u want to reverse an array ?( yes = 1 no = 0)");
    scanf("%d",&c);
    
    if (c == 1)
    {
        int start = 0;
        int end = size - 1; 
        int temp;
        
        while(start < end)
        {
            temp     = a[start];
            a[start] = a[end];
            a[end]   = temp;
            
            start++;
            end--;
        }                
        printf("Reversed array = ");
        
        for(i = 0 ; i < size ; i++)
        {
            printf("%d ",a[i]);
        }
    }
    else if (c == 0)
    {
        printf("ok as your wish.");
    }
    else
    {
        printf("fuck u !!!!");
    }
    return 0;
}