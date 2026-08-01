#include <stdio.h>

int main()
{
    FILE *fp;
    
    fp = fopen("text.txt","w");
    
    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }
    
    fputc('H', fp);
    fputc('e', fp);
    fputc('l', fp);
    fputc('l', fp);
    fputc('o', fp);
    
    fputs(" World",fp);
    
    fclose(fp);
    
    fp = fopen("text.txt","r");
    
    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }
    
    //char ch;
    //for(int i = 0; i < 5; i++)
    //{
    //    ch = fgetc(fp);
    //    printf("%c", ch);
    //}
    
    char str[50];
    
    fgets(str, 50, fp);
    printf("%s",str);
    
    fclose(fp);
    
    return 0;
}









