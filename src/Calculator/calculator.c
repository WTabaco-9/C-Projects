#include <stdio.h>

typedef enum 
{
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/',
    EXIT = 'x'
} Operands;

/* Calculator loop */
void start();

/* Arithmetic operations */
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

int main(void)
{
    printf("Calculator\n\n");
    start();
    return 0;
}

/* Function definitions */
void start()
{
    printf("Starting calculator...\n\n");

    /* Main loop */
    while (1)
    {
        float num1, num2;
        printf("Please enter 2 numbers: ");
        scanf("%f %f", &num1, &num2);
        printf("Values: %.2f and %.2f\n\n", num1, num2);

        char operator;
        printf("Please enter an operator (+, -, *, /, x to exit): ");
        scanf(" %c", &operator);
        printf("Operator: %c\n\n", operator);

        switch (operator)
        {
            case ADD:
                float sum = add(num1, num2);
                printf("Sum: %.2f\n\n", sum);
                break;
            case SUBTRACT:
                float difference = subtract(num1, num2);
                printf("Difference: %.2f\n\n", difference);
                break;
            case MULTIPLY:
                float product = multiply(num1, num2);
                printf("Product: %.2f\n\n", product);
                break;
            case DIVIDE:
                float quotient = divide(num1, num2);
                printf("Quotient: %.2f\n\n", quotient);
                break;
            case EXIT:
                printf("Exiting calculator...\n");
                return;
            default:
                printf("Invalid operator. Please try again!\n");
                break;
        }
    }
    return;
}

float add(float x, float y)
{
    return x + y;
}

float subtract(float x, float y)
{
    return x - y;
}

float multiply(float x, float y)
{
    return x * y;
}

float divide(float x, float y)
{
    return x / y;
}