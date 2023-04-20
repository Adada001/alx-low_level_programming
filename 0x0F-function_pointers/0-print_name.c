/**
 * print_name - prints a name using a provided function
 *
 * @name: pointer to name string
 * @f: pointer to function takes a char pointer as argument and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
