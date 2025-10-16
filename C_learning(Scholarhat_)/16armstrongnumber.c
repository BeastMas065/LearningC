#include <stdio.h>
#include <math.h>

int main() 
{
    int number, originalnumber, digits = 0, remainder;
    double result = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    originalnumber = number;
    int temp = number;
    while(temp > 0)
    {
        temp /= 10;
        digits++;
    }
    temp = number;
    while(temp > 0)
    {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    if((int)result == originalnumber)
        printf("%d is an Armstrong number.\n", originalnumber);
    else
        printf("%d is not an Armstrong number.\n", originalnumber);
    return 0;
}
