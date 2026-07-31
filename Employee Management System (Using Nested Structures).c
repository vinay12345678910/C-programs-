#include <stdio.h>
#include <string.h>

struct Address
{
    char city[30];
    char state[30];
    int pin;
};

struct Employee
{
    char name[30];
    int id;
    float salary;
    
    struct Address ad;
};

void input(struct Employee e[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter details of Employee %d\n",i+1);
        
        printf("Enter Name: ");
        fgets(e[i].name,30,stdin);
        e[i].name[strlen(e[i].name) - 1] = '\0';
    
        printf("Enter id: "); 
        scanf("%d",&e[i].id);
    
        printf("Enter salary: ");
        scanf("%f",&e[i].salary);
        
        getchar();

        printf("Enter city: ");
        fgets(e[i].ad.city,30,stdin);
        e[i].ad.city[strlen(e[i].ad.city) - 1] = '\0';        

        printf("Enter state: ");
        fgets(e[i].ad.state,30,stdin);
        e[i].ad.state[strlen(e[i].ad.state) - 1] = '\0'; 
        
        printf("Enter pin: "); 
        scanf("%d",&e[i].ad.pin);   
        
        getchar();
    }    
}

void display(struct Employee e[],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\n\nName: %s\nId: %d\nSalary: %.2f\nCity: %s\nState: %s\nPin: %d",
        e[i].name,
        e[i].id,
        e[i].salary,
        e[i].ad.city,
        e[i].ad.state,
        e[i].ad.pin);
    }
}

int main()
{
    int n = 3;
    struct Employee E[n];
    
    input(E,n);
    display(E,n);
    
    return 0;
}







