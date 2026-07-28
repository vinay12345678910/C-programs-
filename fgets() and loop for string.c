#include<stdio.h>
int main()
{
    char name[50];
    int i;
    
    printf("Enter ur name: ");
    fgets(name,50,stdin);
    
    for(i = 0; name[i] != '\0'; i++)
    {
        printf(" %c ",name[i]);
    }
    return 0;
}

