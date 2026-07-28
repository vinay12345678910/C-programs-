#include <stdio.h>

void mystrcpy(char *a, char *b)
{
    while(*a != '\0')
    {
        *b = *a;
        b++;
        a++;
    }
    *b = '\0';
}

int main()
{
    char a[] = "Hello";
    char b[20];
    
    mystrcpy(a,b);
    
    printf("%s",b);
    
    return 0;
}