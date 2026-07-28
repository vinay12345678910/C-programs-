#include <stdio.h>

int mystrlen(char str[])
{
    int len = 0;
    
    while(*str != '\0')
    {
        len++;
        str++;
    }
    
    return len;
}

int main()
{
    char str[] = "Hello";
    
    printf("%d", mystrlen(str));
    
    return 0;
}