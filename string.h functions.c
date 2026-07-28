#include <stdio.h>
#include <string.h>
int main()
{
	char a[20] = "vinay";
	char b[20];
	char c[20] = "shinde";


	printf("length of a = %zu\n", strlen(a));  // also %d can be used but not always right.
	printf("size of a = %zu\n\n", sizeof(a));

	strcpy(b,a);                              // copying string using fuction
	
	printf("size of b = %zu\n", sizeof(b));
	printf("length of b = %zu\n\n", strlen(b));

	printf("b = %s\n",b);
	printf("after cpoing a into b (a) remains same = %s\n\n",a);

	strcat(a,c);                              // combining string using fuction
	
	printf("after coping c to a, (a) = %s\n",a);
    printf("c remains same = %s\n\n",c);
    
    if(strcmp(b,c) == 0)                         //compares strings and if they are same gives output 0.
    {
        printf("b and c are equal");          
    }
    else
    {
        printf("b and c are not equal");
    }
 
	return 0;  
}