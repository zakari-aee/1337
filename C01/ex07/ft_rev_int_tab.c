/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 10:21:56 by zallioua          #+#    #+#             */
/*   Updated: 2025/08/18 16:58:57 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*void	print_tab(int *list ,int lenght)
{
	int	z;
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

	int	list[] = {0,1,2,3,4,5,6,7,8,9};
	t = 10;
	print_tab(list,t);
	ft_rev_int_tab(list ,t);
	write(1,"\n",1);
	print_tab(list,t);
	return (0);

}*/
