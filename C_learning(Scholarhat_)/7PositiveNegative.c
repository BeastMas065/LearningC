#include <stdio.h>

int main() {
    int Num;
    printf("Enter a Number: ");
    scanf( "%d" , &Num);
    if ( Num > 0 )
    {
        printf("Number is Positive");
    }
    else if ( Num < 0 )
    {
        printf("Number is Negative");
    }
    else
    {
        printf("Number is Zero");
    }
    return 0;
}