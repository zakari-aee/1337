/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <zallioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:20:45 by zallioua          #+#    #+#             */
/*   Updated: 2025/09/01 20:32:01 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' || (base[i] >= 9
				&& base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	len_to;
	int	len_from;
	int	value;

	len_to = check_base(base_to);
	len_from = check_base(base_from);
	if (!len_from || !len_to)
		return (0);
	value = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(value, base_to));
}

int	main(void)
{
	char *k = ft_convert_base("101010", "01", "0123456789");
	printf("%s\n", k);
	return (0);
}