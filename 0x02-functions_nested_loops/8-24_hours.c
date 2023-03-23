#include "main.h"
/**
*jack_bauer-printseveryminuteofthedayofJackBauer
*/
void jack_bauer(void)
{
int hours,minutes;

for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar("%.2d:%.2d\n", hours, minutes);
}
}
}
