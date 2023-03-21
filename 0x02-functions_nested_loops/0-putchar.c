#include <stdio.h>
/**
 * main - prints '_putchar\n'
 *
 * Return: Always 0 (success)
 */

int main() {
    char str[] = "_putchar\n";
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    return 0;
}
