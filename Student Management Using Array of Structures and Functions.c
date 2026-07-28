#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float marks;
};

void information(struct student s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter Age: ");
        scanf("%d", &s[i].age);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        getchar();   // Remove '\n' before next fgets()
    }
}

int main()
{
    int n = 3;
    struct student s[n];

    information(s, n);

    printf("\n------ Student Details ------\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name  : %s\n", s[i].name);
        printf("Age   : %d\n", s[i].age);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}