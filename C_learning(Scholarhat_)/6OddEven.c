#include <stdio.h>

int main() {
    int Num;
    printf("Enter a Number: ");
    scanf( "%d" , &Num);
    if ( Num % 2 == 0 )
    {
        printf("Number is Even");
    }
    else 
    {
        printf("Number is Odd");
    }
    return 0;
}