//Task 1 : Calculator Program

#include<stdio.h>
int main() {
    float num1, num2;
    char operator;

    printf("Enter the first number : ");
    scanf("%f", &num1);

    printf("Enter an operatpr (+, -, *, /) : ");
    scanf(" %c", &operator);

    printf("Enter the second number : ");
    scanf("%f", &num2);

    switch(operator) {
        case '+' :
            printf("Result = %.2f", num1 + num2);
            break;

        case '-' :
            printf("Result = %.2f", num1 - num2);
            break;

        case '*' :
            printf("Result = %.2f", num1 * num2);
            break;

        case '/' :
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero");
            break;
        default :
            printf("Invalid Operator");
    }

    return 0;
}