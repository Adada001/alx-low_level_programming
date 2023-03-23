#include "main.h"
/**
*jack_bauer-printseveryminuteofthedayofJackBauer
*/
voidjack_bauer(void)
{
inthours,minutes;

for(hours=0;hours<24;hours++)
{
for(minutes=0;minutes<60;minutes++)
{
printf("%.2d:%.2d\n",hours,minutes);
}
}
}

