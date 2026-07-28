#include <stdio.h>
int main()
{
    char name[50];
    int a,b;
    
    printf("Enter ur name (do not use space):");
    scanf("%s",name);
    
    printf("Do u have degree: (yes = 1 no = 0)\n");
    scanf("%d",&a);
    
    if(a == 1)
    {
        printf("do u have any work expirence: (yes = 1 no = 0)\n");
        scanf("%d",&b);
        
        if(b == 1)
        {
            printf("Congrats! %s u r eligible",name);
        }
        else
        {
            printf("Not eligible reason u do not have any work exp");
        }
    }
    else
    {
        printf("Not eligible reason: u do not have degree");
    }
    return 0;
}