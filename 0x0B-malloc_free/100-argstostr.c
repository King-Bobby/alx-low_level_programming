#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a = 0, b = 0, c = 0, d = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (a < ac)
	{
		while (av[a][b])
		{
			c++;
			b++;
		}
		b = 0;
		a++;
	}
	str = malloc((sizeof(char) * c) + ac + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			str[d] = av[a][b];
			d++;
			b++;
		}
		str[d] = '\n';
		b = 0;
		d++;
		a++;
	}
	d++;
	str[d] = '\0';
	return (str);
}
