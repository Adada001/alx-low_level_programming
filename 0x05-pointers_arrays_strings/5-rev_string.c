#include "main.h"
#include <stdi0.h>
/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s) - 1; i < j; )
{
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    i++;
    j--;
}

