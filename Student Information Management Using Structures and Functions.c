#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float marks;
};

void information(struct student *n , int s)
{
    printf("student %d\n",s);
    
    printf("Enter student name: ");
    fgets((*n).name , 50 , stdin);
    n->name[strlen(n->name) - 1] = '\0';
    
    printf("Enter Age of student: ");
    scanf("%d",&n->age);
    
    printf("Enter student marks: ");
    scanf("%f",&(*n).marks);
    
    getchar(); // Remove newline before the next call to fgets()
}

int main()
{
    struct student s1,s2;

    information(&s1,1);
    
    printf("\nage = %d marks = %.2f name = %s\n\n",s1.age,s1.marks,s1.name);
    

    information(&s2,2);
    
    printf("\nage = %d marks = %.2f name = %s\n\n",s2.age,s2.marks,s2.name);

    return 0;
}