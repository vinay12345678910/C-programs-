#include<stdio.h>
int main()
{
    int n,reverse=0,digit;
    
    printf("Enter number: ");
    scanf("%d",&n);
    
    while(n>0)                        //52
    {
        digit = n % 10;               // loop 1 = (d = 2) loop 2 = (d = 5)  here the last digit is extracted 
        
        reverse = reverse*10 + digit; // loop 1 = (r = 2) loop 2 = (r = 25) 
        
        n = n / 10;                   // loop 1 = (n = 5) loop 2 = (n = 0)  
    }
    printf("%d",reverse);
}