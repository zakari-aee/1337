/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 13:17:28 by zallioua          #+#    #+#             */
/*   Updated: 2025/08/17 17:34:51 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	b;

	b = 1;
	while (b)
	{
		b = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				b = 1;
			}
			i++;
		}
	}
}
/*
void	print_tab(int *list ,int lenght)
{
	int		z;
	char	c;

	z = 0;
	while (z <= lenght - 1)
	{
		c = list[z] + 48;
		write(1, &c, 1);
		z++;
	}
}

int	main(void)
{
	int	t;
	int	list[] = {9,1,2,7,4,5,3,7,9,3};

	t = 10;
	print_tab(list,t);
	ft_sort_int_tab(list ,t);
	write(1,"\n",1);
	print_tab(list,t);
	return (0);
}
*/
