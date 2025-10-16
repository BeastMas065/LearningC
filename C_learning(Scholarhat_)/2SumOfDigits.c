#include <stdio.h>
int main() 
{
    int number, digits, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0)
    {
        digits = number % 10;
        sum += digits;
        number = number / 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
