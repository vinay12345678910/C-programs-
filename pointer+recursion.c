#include <stdio.h>

void fun(int *p, int n)
{
    if (n == 0)
        return;

    fun(p + 1, n - 1);

    *p = *p + 1;

    printf("%d ", *p);        //{4,3,2}
}

int main()
{
    int arr[] = {1, 2, 3};    // arr[] = {2,3,4}

    fun(arr, 3);

    printf("\n");

    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i]);

    return 0;
}


