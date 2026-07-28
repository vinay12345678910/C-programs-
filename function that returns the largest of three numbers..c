#include <stdio.h>

int largest(int a, int b, int c)
{
    int d;
    
    if(a>b && a>c)
        d = a;
        
    else if(b>a && b>c)
        d = b;
        
    else
        d = c;
    
    return d;    
}

int main()
{
    int a, b, c;
    
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    
    printf("largest no is = %d",largest(a,b,c));
    
    return 0;
}