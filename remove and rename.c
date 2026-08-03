#include <stdio.h>

int main()
{
    int status;

    status = remove("student.txt");

    if(status == 0)
    {
        printf("File deleted successfully.");
    }
    else
    {
        printf("Unable to delete file.");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int status;

    status = rename("student.txt", "employee.txt");

    if(status == 0)
    {
        printf("File renamed successfully.");
    }
    else
    {
        printf("Unable to rename file.");
    }

    return 0;
}