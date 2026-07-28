#include <stdio.h>
int main()
{
    int marks[10];
    int i;
    
    printf("Enter marks of 10 students:\n");
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d",&marks[i]);
    }
    
    printf("\nMarks of Students:\n");
    
    for(i = 0; i < 10; i++)
    {
        printf("Student %d = %d\n",i+1,marks[i]);
    }
    return 0;
}
