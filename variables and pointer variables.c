#include <stdio.h>

int main()
{
    int age = 19;         // variable = age it's value is 19
    
    int *Age = &age;      // *pointer variable = (Age) it stores (&age) 
    printf("%d\n",age);   // printd value
    printf("%d\n",*Age);  // prints value
    
    printf("%p\n",&age);  // prints address 
    printf("%p\n",Age);   // prints address 
    
    
    return 0;
}

// Using a normal variable and a pointer variable, we can access both the value and the memory address of a variable.
// *Age means: "Go to that address and get the value.