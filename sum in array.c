#include<stdio.h>
int main()
{
    int marks[] = {1, 1, 1, 1, 1, 1};
    int i,sum=0;
    
    printf("Marks of students are as follows:\n");
    
    int size = 6;
    for(i = 0 ; i < size ; i++)
    {
        printf("student %d = %d\n",i+1,marks[i]);
        sum = sum + marks[i];
    }
    printf("Sum = %d",sum);
    return 0;
}
