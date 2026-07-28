#include <stdio.h>

int cube(int n)
{
    return n*n*n;
}
    
int main()
{
    int a;
    
    printf("Enter a number: ");
    scanf("%d",&a);
    
    a = cube(a);
    
    printf("cube = %d",a);
    
    return 0;
}