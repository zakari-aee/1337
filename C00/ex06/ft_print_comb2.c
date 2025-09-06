/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 09:20:22 by zallioua          #+#    #+#             */
/*   Updated: 2025/08/16 10:21:17 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_za(int a, int b)
{
	char	k;
	char	r;

	k = (a / 10) + 48;
	write(1, &k, 1);
	k = (a % 10) + 48;
	write(1, &k, 1);
	write(1, " ", 1);
	r = (b / 10) + 48;
	write(1, &r, 1);
	r = (b % 10) + 48;
	write(1, &r, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_za(a, b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
