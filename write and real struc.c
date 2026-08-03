#include <stdio.h>

struct Student
{
    char name[30];
    int age;
    float marks;
};

int main()
{
    FILE *fp;

    struct Student s1 = {"Vinay", 19, 91};
    struct Student s2;

    fp = fopen("student.dat", "wb");

    fwrite(&s1, sizeof(struct Student), 1, fp);

    fclose(fp);

    fp = fopen("student.dat", "rb");

    fread(&s2, sizeof(struct Student), 1, fp);

    fclose(fp);

    printf("Name  : %s\n", s2.name);
    printf("Age   : %d\n", s2.age);
    printf("Marks : %.2f\n", s2.marks);

    return 0;
}