/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <zallioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:20:53 by zallioua          #+#    #+#             */
/*   Updated: 2025/09/01 20:32:02 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base);

int	num_len(long nbr, int base_len)
{
	int	len;

	len = (nbr <= 0);
	while (nbr)
	{
		nbr /= base_len;
		len++;
	}
	return (len);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	long	nb;
	char	*result;

	base_len = check_base(base);
	if (!base_len)
		return (0);
	nb = nbr;
	len = num_len(nb, base_len);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	if (nb == 0)
		result[0] = base[0];
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[--len] = base[nb % base_len];
		nb /= base_len;
	}
	return (result);
}

int	check_str(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	i;
	int	sign;
	int	len_base;
	int	index;

	nb = 0;
	i = 0;
	sign = 1;
	len_base = check_base(base);
	if (!len_base)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13) || *str == '+'
		|| *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((index = check_str(*str, base)) != -1)
	{
		nb = (nb * len_base) + index;
		str++;
	}
	return (nb * sign);
}
