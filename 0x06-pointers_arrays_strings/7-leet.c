#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: the input string
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
    char *str = s;
    char *leet_str = "4433771100";
    char *letters = "aAeEoOtTlL";
    int i, j;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (str[i] == letters[j])
            {
                str[i] = leet_str[j];
                break;
            }
        }
    }

    return str;
}
