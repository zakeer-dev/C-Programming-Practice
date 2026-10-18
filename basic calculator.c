/*
 * Project: Basic Calculator & Number Analyzer in C
 * Author: Mohammed Zakeer
 * Description: A modular C program demonstrating conditional logic, loops, 
 *              and user-defined functions for basic arithmetic operations.
 */

#include <stdio.h>

// Function declarations
void showMenu();
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;

    printf("=== Simple C Calculator & Logic Tool ===\n");
    
    do {
        showMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n\n", num1, num2, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n\n", num1, num2, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result: %.2f / %.2f = %.2f\n\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed!\n\n");
                }
                break;
            case 5:
                printf("Exiting program. Happy coding!\n");
                break;
            default:
                printf("Invalid choice! Please select between 1 and 5.\n\n");
        }
    } while (choice != 5);

    return 0;
}

void showMenu() {
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
}

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }
