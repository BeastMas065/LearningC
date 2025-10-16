#include <stdio.h>

int main() {
    char op;
    double first, second, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op) {
        case '+':
            result = first + second;
            printf("%.2lf + %.2lf = %.2lf\n", first, second, result);
            break;
        case '-':
            result = first - second;
            printf("%.2lf - %.2lf = %.2lf\n", first, second, result);
            break;
        case '*':
            result = first * second;
            printf("%.2lf * %.2lf = %.2lf\n", first, second, result);
            break;
        case '/':
            if (second != 0)
                result = first / second;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            printf("%.2lf / %.2lf = %.2lf\n", first, second, result);
            break;
        default:
            printf("Error! Operator is not correct\n");
    }
    return 0;
}
