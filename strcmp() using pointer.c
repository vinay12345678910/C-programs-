  #include <stdio.h>

int mystrcmp(char *str1, char *str2)
{
    while(*str1 != '\0' && *str2 != '\0')
    {
        if(*str1 != *str2)
            return 0;

        str1++;
        str2++;
    }

    return 1;
}

int main()
{
    char str1[] = "Apple";
    char str2[] = "Apple";

    printf("%d", mystrcmp(str1, str2));
    
    if(mystrcmp(str1, str2) == 0)
    {
        printf(" Both strings are not same");
    }
    else
    {
        printf(" Both strings are same");
    }
    
    return 0;
}





