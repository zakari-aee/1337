/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:19:07 by zallioua          #+#    #+#             */
/*   Updated: 2025/08/22 12:07:07 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	sg;
	int	nb;
	int	i;

	nb = 0;
	i = ft_lenght(str);
	sg = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (sg * nb);
}
