#include<stdio.h>
int main()
{
    int n,b,reverse=0,digit,cube,sum=0;
    
    printf("Enter number: ");
    scanf("%d",&n);
    b = n;
    
    while(n>0)                         // n = 52
    {
        digit = n % 10;                // loop 1 = (d = 2) loop 2 = (d = 5) 
        
        reverse = (reverse*10 + digit);// loop 1 = (r = 2) loop 2 = (r = 25)
        
        cube = (digit*digit*digit);
        sum = (sum + cube);
        
        n = n / 10;                    // loop 1 = (n = 5) loop 2 = (n = 0)  
    }
    printf("reversal = %d\n",reverse);
    printf("Armstrong number = %d\n",sum);
    
    if(b == reverse)
    {
        printf("Entered number is palindrome");
    }
    else
    {
        printf("Entered number is not palindrome");
    }
    if(b == sum)
    {
        printf("\nEntered number is Armstrong");
    }
        else
    {
        printf("\nEntered number is not Armstrong");
    }
    return 0;
}