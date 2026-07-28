#include <stdio.h>

void change(int **p)
{
    *p = NULL;
}

int main()
{
    int x = 10;
    int *ptr = &x;

    change(&ptr);

    if(ptr == NULL)
        printf("NULL");
    else
        printf("%d", *ptr);
}
