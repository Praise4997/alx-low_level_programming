#include <stdio.h>

/* Function that prints 10 times the alphabet in lowercase */
void print_alphabet_x10(void)
{
    char letter;

    for (int i = 0; i < 10; i++) {
        for (letter = 'a'; letter <= 'z'; letter++) {
            putchar(letter);
        }
        putchar('\n');
    }
}

/* Main function */
int main(void)
{
    print_alphabet_x10();
    return 0;
}

