#include "my_math.h"
#include <stdio.h>

int main(void)
{
	double radius = 5.0;
	double circumference = 2 * PI * radius;
	printf("The circumference of a circle with radius %f is %f\n", radius, circumference);
	return (0);
}
