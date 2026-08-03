#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    printf("First Read:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    rewind(fp);

    printf("\n\nSecond Read:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}