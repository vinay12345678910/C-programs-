#include <stdio.h>
#include <string.h>

int main()
{
	char name[50];

	printf("Enter name: ");
	fgets(name,50,stdin);

	printf("length of name = %zu\n",strlen(name));

	int start = 0;
	int end   = strlen(name) - 2;
	int temp;

	while(start < end)
	{
		temp        = name[start];
		name[start] = name[end];
		name[end]   = temp;

		start++;
		end--;
	}
	printf("reversed string = %s",name);

	return 0;
}





