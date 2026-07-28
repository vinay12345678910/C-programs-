#include <stdio.h>
int main()
{
    int a,b,x;
    int add,sub,multi;
    float division;
    
    printf("select what do u want to do\n1.add\n2.sub\n3.multi\n4.div\n");
    scanf("%d",&x);
    
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    
    switch(x)
    {
        case 1:
        add = a + b;
        printf("add = %d",add);
        break;
        
        case 2:
        sub = a - b;
        printf("sub = %d",sub);
        break;
        
        case 3:
        multi = a * b;
        printf("multi = %d",multi);
        break;
        
        case 4:
        division =(float)a / b;
        printf("div = %.2f",division);
        break;
        
        default:
        printf("fuck u");
        break;
    }
    return 0;
}