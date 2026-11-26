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

/* Functions */
void MainMenu();


int main(void)
{
    printf("Student Management System V1.0\n\n");
    start();
    return 0;
}

/* Function definition */
void start()
{
    Student class[CLASS_SIZE];
    Student student;
    printf("=============================================\nWelcome to the Class!\nMaximum Class Size: %i\n=============================================\n\n\n\n\n", CLASS_SIZE);

    while (1)
    {
        MainMenu();
    }
    
    return;
}

void MainMenu()
{
    /* Main Features
     *
     * 1 - Create/Add
     * 2 - Delete/Remove
     * 3 - Edit/Modify
     * 4 - Search by an attribute
     * 5 - Sort by an attribute
     * 
     * 0 - Exit
     * 
     */
}