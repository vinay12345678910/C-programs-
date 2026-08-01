#include <stdio.h>

int main()
{
    FILE *fp;
    
    fp = fopen("student.txt","w");
    
    if(fp == NULL)
    {
        printf("File could not be opened.");
        return 1;
    }
    
    fprintf(fp,"Name : Vinay\n");
    fprintf(fp,"age : 19\n");
    fprintf(fp,"Marks : 91\n");
    fprintf(fp,"Prn : 22458020167");
    
    fclose(fp);
    
    printf("Data written succesfully.");
    
    return 0;
}