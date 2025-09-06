/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:32:11 by zallioua          #+#    #+#             */
/*   Updated: 2025/08/25 13:28:12 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && n && *s1 && *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int main(void)
{
    char *s1 = "abc";
    char *s2 = "akc";

    // This is the dangerous case for your code:
    printf("Testing ft_strncmp(\"abc\", \"abc\", 3):\n");
    printf("Yours: %d\n", ft_strncmp(s1, s2, 2));
    printf("Real : %d\n", strncmp(s1, s2, 2));

    return 0;
}
