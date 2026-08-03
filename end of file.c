#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("test.txt","r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    while(!feof(fp))
    {
        ch = fgetc(fp);

        if(ch != EOF)
        {
            printf("%c", ch);
        }
    }

    fclose(fp);

    return 0;
}