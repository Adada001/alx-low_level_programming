#include <stdio.h>
/**
 * main - prints '_putchar\n'
 * Return: Always 0 (success)
 */
int main() {
    char str[] = "_putchar";
    int length = sizeof(str) / sizeof(str[0]);
    
    for (int i = 0; i < length - 1; i++) {
        putchar(str[i]);
    }
    
    putchar('\n');
    return 0;
}
