#include <stdio.h>
int main()
{
    int i,n,factorial=1;
    
    printf("Enter number: ");
    scanf("%d",&n);
    
    for( i = 1 ; i <= n ; i++)
    {
        
        printf("%d",i);
        factorial = i * factorial;
    }
    printf("\n%d! = %d",n,factorial);
} 