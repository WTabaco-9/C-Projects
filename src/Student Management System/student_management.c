#include <stdio.h>

/* Max class size */
const int CLASS_SIZE = 31;

/* Enumerator for Options */
typedef enum
{
    CREATE = 1,
    DELETE = 2,
    EXIT = 0
} OPTION;

/* Defining a student */
typedef struct 
{
    char *firstName[64];
    int age;
    char sex;
    float height;
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

        int choice;
        printf("Please select an option: ");
        scanf("%i", &choice);

        switch (choice)
        {
            case CREATE:
                break;
            case DELETE:
                break;
            case EXIT:
                return;
            default:
                printf("Invalid! Try again!\n\n");
                break;
        }
    }
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
     * 6 - Print all students
     * 0 - Exit
     * 
     */
    printf("=============== Main Menu ===============\n\n");
    printf("1 - Create/Add a Student\n");
    printf("2 - Delete/Remove a Student\n");
    printf("=========================================\n\n");
}