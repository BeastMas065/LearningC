#include <stdio.h>
int main()
{
    char character;
    printf("Enter An Alphabet : ");
    scanf("%c", &character);
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        printf("%c is an Alphabet \n", character);
    }
    else
    {
        printf("%c is not an Alphabet \n", character);
    }
    return 0;
}