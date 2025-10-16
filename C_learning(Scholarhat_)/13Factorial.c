#include <stdio.h>
int main() {
    int a, b, i, n;
    
    printf("Enter first number: ");
    scanf(" %d", &n);
    
    a = 1;
    b = 0;
    for(i=n;i>1;i--)
    {
        b = i * a;
        a = b;
    }
    printf("%d ", b);
    return 0;
}
