#include<stdio.h>
int main()
{
    int n,b,reverse=0,digit;
    
    printf("Enter number: ");
    scanf("%d",&n);
    b = n;
    
    while(n>0)                        // n = 52
    {
        digit = n % 10;               // loop 1 = (d = 2) loop 2 = (d = 5)  
        
        reverse = reverse*10 + digit; // loop 1 = (r = 2) loop 2 = (r = 25) 
        
        n = n / 10;                   // loop 1 = (n = 5) loop 2 = (n = 2)  
    }
    printf("reversal = %d\n",reverse);
    if(b == reverse)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}