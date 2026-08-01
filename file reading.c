#include <stdio.h>

int main()
{
    FILE *fp;

    char name[30];
    int age;
    int marks;
    int prn;

    fp = fopen("student.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.");
        return 1;
    }

    fscanf(fp, "%s", name);
    fscanf(fp, "%d", &age);
    fscanf(fp, "%d", &marks);
    fscanf(fp, "%d", &prn);

    fclose(fp);

    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Marks : %d\n", marks);
    printf("Prn   : %d\n", prn);

    return 0;
}