#include <stdio.h>
#include <string.h>

struct Address
{
    char city[30];
    char state[30];
    int pin;
};

struct Students
{
    char name[50];
    int age;
    
    struct Address ad;
};

int main()
{
    struct Students s1;
    
    printf("Enter name of student: ");
    fgets(s1.name,50,stdin);
    s1.name[strlen(s1.name)-1] = '\0';
    
    printf("Enter age of student: ");
    scanf("%d",&s1.age);
    
    getchar();
    
    printf("Enter city of student: ");
    fgets(s1.ad.city,30,stdin);
    s1.ad.city[strlen(s1.ad.city)-1] = '\0';
    
    printf("Enter state of student: ");
    fgets(s1.ad.state,30,stdin);  
    s1.ad.state[strlen(s1.ad.state)-1] = '\0';
    
    printf("Enter PIN code of student: ");
    scanf("%d",&s1.ad.pin);
    
    printf(" %s %d %s %s %d",s1.name,s1.age,s1.ad.city,s1.ad.state,s1.ad.pin);
    
    return 0;
}









