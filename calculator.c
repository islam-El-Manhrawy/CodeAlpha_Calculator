#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main() {
    float num1, num2;
    double base, exp; 
    double a, b, c, x, eq_result; 
    int choice;

    while(1) {
        printf("\n=== Advanced Calculator ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power Calculation (x^y)\n");
        printf("6. Solve Quadratic Equation (ax^2 + bx + c)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 7) {
            printf("Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.1f\n", num1 + num2);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.1f\n", num1 - num2);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.1f\n", num1 * num2);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2 != 0)
                    printf("Result: %.1f\n", num1 / num2);
                else
                    printf("Math ERROR !!\n");
                break;
            case 5:
                
                printf("Enter base number (x): ");
                scanf("%lf", &base);
                printf("Enter exponent power (y): ");
                scanf("%lf", &exp);
                printf("Result: %.1lf\n", pow(base, exp));
                break;
            case 6:
               
                printf("Enter coefficients a, b, and c: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                printf("Enter value of x: ");
                scanf("%lf", &x);
                
                eq_result = (a * pow(x, 2)) + (b * x) + c;
                printf("Result of (%gx^2 + %gx + %g) when x=%.5lf is: %.5lf\n", a, b, c, x, eq_result);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    system("pause");
    return 0;
}
