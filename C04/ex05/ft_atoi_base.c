/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <zallioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 17:57:25 by zallioua          #+#    #+#             */
/*   Updated: 2025/09/02 11:41:51 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	chek(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32 || base[i] == '+'
			|| base[i] == '-')
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

int	chek_str(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1337);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	i;
	int	sign;
	int	len_base;

	nb = 0;
	i = 0;
	sign = 1;
	len_base = chek(base);
	if (!(len_base))
		return (0);
	while (str[i] == '+' || str[i] == '-' || str[i] == 32)
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (chek_str(str[i], base) != -1337)
	{
		nb = (nb * len_base) + chek_str(str[i], base);
		i++;
	}
	return (nb * sign);
}
