#include <stdio.h>
int main()
{
    int a,b,x;
    int add,sub,multi;
    float division;
    
    printf("select what do u want to do:\n");
    do
    {
        printf("1 = add\n2 = sub\n3 = multi\n4 = div\n5 = exit\n");
        scanf("%d",&x);
        
        if(x >= 1 && x <= 4)
        {
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        }
        
        switch(x)
        {
        case 1:
        add = a + b;
        printf("add = %d\n",add);
        break;
        
        case 2:
        sub = a - b;
        printf("sub = %d\n",sub);
        break;
        
        case 3:
        multi = a * b;
        printf("multi = %d\n",multi);
        break;
        
        case 4:

        if(b != 0)
        {
            division = (float)a / b;
            printf("%.2f", division);
        }
        else
        {
            printf("Cannot divide by zero\n");
        }
        
        break;
        
        case 5:
        printf("ok");
        break;
        
        default:
        printf("fuck u !!!\n");
        break;
        }
    }
    while(x != 5);
    
    return 0;
}






#include<stdio.h>
int main()
{
    int a,b;
    int add,sub,multi,choice;
    float divi;
    
    do
    {
        printf("Select What do u Want:\n");
        printf("1.add\n2.sub\n3.multi\n4.divi\n5.exit\n\n");
    
        scanf("%d",&choice);
    
        if(choice >= 6)
        {
            printf("Fuck u !!!!");
            break;
        }
        if(choice == 5)
        {
            break;
        }
        
        printf("Enter 2 numbers:");
        scanf("%d%d",&a,&b);
    
        switch(choice)
        {
            case 1:
            add = a+b;
            printf("Add = %d\n\n",add);
            break;
        
            case 2:
            sub = a-b;
            printf("Sub = %d\n\n",sub);
            break;
        
            case 3:
            multi = a*b;
            printf("Multi = %d\n\n",multi);
            break;
        
            case 4:
            divi = (float)a / b;
            printf("Divi = %.2f\n\n",divi);
            break;
        }
    }   
    while(choice < 5);
    return 0;
}