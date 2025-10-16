#include <stdio.h>

int main() {
    int a, b, c, n;

    printf("Enter nth term: ");
    scanf(" %d", &n); // Note the space before %c to catch stray newlines
    a = 0;
    b = 1;
    c = 1;
    for(int i=1;i<=n;i++)
    {
        
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
