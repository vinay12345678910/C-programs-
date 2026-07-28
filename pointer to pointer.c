#include <stdio.h>

int main()
{
	int x = 50;

	int *age = &x;        // age stores the address of x

	int **ageage = &age;  // ageage stores the address of age

	printf("x = %d\n", x);                // Prints: 50

	printf("age = %p\n", age);            // Prints: Address of x
 
	printf("*age = %d\n", *age);          // Prints: Value of x (50)

	printf("ageage = %p\n", ageage);      // Prints: Address of age

	printf("*ageage = %p\n", *ageage);    // Prints: Address of x (same as age)

	printf("**ageage = %d\n", **ageage);  // Prints: Value of x (50)

	return 0;
}