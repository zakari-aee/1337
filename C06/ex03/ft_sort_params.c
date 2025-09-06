/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <zallioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 09:56:31 by zallioua          #+#    #+#             */
/*   Updated: 2025/09/01 20:00:32 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }

// int	ft_strcpm(char *s1, char *s2)
// {
// 	while ((*s1 && *s2) && (*s1 == *s2))
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*s1 - *s2);
// }

// void	ft_sort(char **argv, int ac)
// {
// 	int		i;
// 	int		b;
// 	char	*temp;

// 	b = 1;
// 	while (b)
// 	{
// 		b = 0;
// 		i = 1;
// 		while (i < ac - 1)
// 		{
// 			if (ft_strcpm(argv[i], argv[i + 1]) > 0)
// 			{
// 				temp = argv[i];
// 				argv[i] = argv[i + 1];
// 				argv[i + 1] = temp;
// 				b = 1;
// 			}
// 			i++;
// 		}
// 	}
// }

// int	main(int ac, char *av[])
// {
// 	int	i;

// 	i = 1;
// 	if (ac < 2)
// 		return (0);
// 	ft_sort(av, ac);
// 	while (i < ac)
// 	{
// 		ft_putstr(av[i]);
// 		i++;
// 	}
// 	return (0);
// }

void	putstr(char *s)
{
	if (*s == '\0')
		return ;
	write(1, s, 1);
	putstr(s + 1);
}
int	comn(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	buble(char **av, int ac)
{
	int		i;
	int		b;
	char	*temp;

	i = 0;
	b = 1;
	while (b)
	{
		b = 0;
		while (i < ac - 1)
		{
			if (comn(av[i], av[i + 1]) > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				b = 1;
			}
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int i = 1;
	buble(av, ac);
	while (i < ac)
	{
		putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}