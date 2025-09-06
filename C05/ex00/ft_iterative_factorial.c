/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:04:33 by zallioua          #+#    #+#             */
/*   Updated: 2025/08/25 21:44:38 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;

	facto = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		facto = facto * nb;
		nb--;
	}
	return (facto);
}
