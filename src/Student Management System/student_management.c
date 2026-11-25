#include <stdio.h>

/* Max class size */
const int CLASS_SIZE = 31;

/* Defining a student */
typedef struct 
{
    char *firstName[64];
    int age;
    char sex;

} Student;

/* Loop */
void start();

int main(void)
{
    printf("Student Management System\n\n");
    return 0;
}

/* Function definition */
void start()
{
    Student class[CLASS_SIZE];
    
    return;
}