#include<stdio.h>
int main()
{
    int number, is_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 1)
    {
        printf("%d is nor a prime neither composite number.\n", number);
    }
    else
    {
        for (int i = 2; i < number/2; i++)
        {
            if (number % i == 0)
            {
                is_prime = 1;
                break;
            }
            else
            {
                is_prime = 0;
            }
        }
    }
    if (is_prime == 0 && number != 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}