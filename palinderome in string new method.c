#include <stdio.h>
#include <string.h>

int main()
{
    char word[50];
    
    printf("Enter your word: ");
    fgets(word , 50 , stdin);
    
    int start = 0;
    word[strlen(word) - 1] = '\0';
    int end = strlen(word) - 1;
    int palinderome = 1;
    
    while(start < end)
    {
        if(word[start] != word[end])
        {
            printf("not palinderome ");
            palinderome = 0;
            break;
        }
        start++;
        end--;
    }
    if(palinderome == 1)
    {
        printf("palinderome");
    }
    return 0;
}


