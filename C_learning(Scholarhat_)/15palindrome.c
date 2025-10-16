#include <stdio.h>

int main() {
    int number, temp, reminder, reversed = 0;
    printf("Enter first number: ");
    scanf(" %d", &number);
    temp = number;
    while (temp > 0)
    {
        reminder = temp % 10;
        reversed = (reversed * 10) + reminder;
        temp = temp / 10;
    }
    if (number == reversed)
    {
        printf("%d is palindrome", number);
    }
    else
    {
        printf("%d not is palindrome", number);
    }
    return 0;
}