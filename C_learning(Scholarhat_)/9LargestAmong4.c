#include <stdio.h>

int main() {
    int a, b, c, d, largest;
    printf("Enter Four Numbers: ");
    scanf( "%d %d %d %d" , &a, &b, &c, &d);
    largest = a;
    if (largest < b)
    {
        largest = b;
    }
    else if (largest < c)
    {
        largest = c;
    }
    else if (largest < d)
    {
        largest = d;
    }
    printf("%d is the largest", largest);
    return 0;
}