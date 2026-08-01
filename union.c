#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data d1;
    
    d1.i = 10;
    printf("i = %d\n",d1.i);
    
    d1.f = 20.5;
    printf("f = %.2f\n",d1.f);
    
    d1.c = 'A';
    printf("c = %c\n",d1.c);        // d1.i & d1.f's memory is lossed.
    
    return 0;
}