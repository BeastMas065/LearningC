#include <stdio.h>
int main() 
{
    int a, b, max, hcf;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    max = (a > b) ? a : b;

    for (int i = 1; i <= max; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("GCD of %d and %d is %d\n", a, b, hcf);
    return 0;
}