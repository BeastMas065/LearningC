#include <stdio.h>

int main() {
    int a, b, i, min;
    printf("Enter first number: ");
    scanf(" %d", &a);
    printf("Enter second number: ");
    scanf(" %d", &b);
    min = a < b ? a : b;
    for(i = min;i=i;i++)
    {
        if((i % a == 0) && (i % b == 0))
        {
            printf("LCM of %d and %d is %d\n", a, b, i);
            break;
        }
    }
    return 0;
}