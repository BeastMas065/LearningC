#include <stdio.h>
int main() {
    int a, b, c, n;
    
    printf("Enter first number: ");
    scanf(" %d", &a);
    printf("Enter second number: ");
    scanf(" %d", &b);
    
    if (a > b)
    {
        for(int i=a;i>1;i--)
        {
            if (a % i == 0)
            {
                if (b % i == 0)
                {
                    printf("HFC of %d and %d is %d", a, b, i);
                    break;
                }
            }
        }
    }
    else if (b > a)
    {
        for(int i=b;i>1;i--)
        {
            if (b % i == 0)
            {
                if (a % i == 0)
                {
                    printf("HFC of %d and %d is %d", a, b, i);
                    break;
                }
            }
        }
    }
    else
    printf("HFC of %d and %d is %d", a, b, a);
    return 0;
}
