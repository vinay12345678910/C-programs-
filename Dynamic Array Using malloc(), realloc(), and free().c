#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int n)
{
	if(n == 0)
		return 0;

	return arr[n-1] + sum(arr, n-1);
}

int main()
{
	int n;

	printf("Enter no of Elements: ");
	scanf("%d",&n);

	int *arr = (int *)malloc(n * sizeof(int));

	printf("Enter Elements: ");

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Your Array is: ");
	for(int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\nSum of array: %d",sum(arr,n));

	int y;
	int a;

	printf("\nDO u want to increase size of array(y = 1 & n = 0)");
	scanf("%d",&y);

	if(y == 1)
	{
		printf("By how many Elements: ");
		scanf("%d",&a);

		int *temp = (int *)realloc(arr,(n + a)* sizeof(int));

		if(temp != NULL)
		{
			arr = temp;
		}

		printf("Enter Elements: ");
		for(int i = n; i < n+a; i++)
		{
			scanf("%d",&arr[i]);
		}

		printf("Your Array is: ");
		for(int i = 0; i < n+a; i++)
		{
			printf("%d ",arr[i]);
		}
	}
	else
	{
	    free(arr);
	    
		return 0;
	}
	
    free(arr);
	return 0;
}



