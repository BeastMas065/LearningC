#include <stdio.h>

int main() {
    char Alphabet;
    printf("Enter a Alphabet: ");
    scanf( "%c" , &Alphabet);
    if ( (Alphabet == 'a') || (Alphabet == 'e') || (Alphabet == 'i') || (Alphabet == 'o') || (Alphabet == 'u') || (Alphabet == 'A') || (Alphabet == 'E') || (Alphabet == 'I') || (Alphabet == 'O') || (Alphabet == 'U'))
    {
        printf("Alphabet is Vowel");
    }
    else 
    {
        printf("Alphabet is Consonant");
    }
    return 0;
}