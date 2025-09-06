#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	rep;

	i = 0;
	if (ac == 2)
		while (av[1][i])
		{
			rep = (av[1][i] | 32) - 'a' + 1;
			while (rep--)
				write(1, &av[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
}
