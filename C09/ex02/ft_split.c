/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zallioua <zallioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 20:25:41 by zallioua          #+#    #+#             */
/*   Updated: 2025/09/04 16:50:20 by zallioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((!(is_sep(str[i], sep)) && (is_sep(str[i + 1], sep)))
			|| (str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*word_dup(char *str, char *sep)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_sep(str[i], sep))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = 0;
	result = malloc((count_words(str, sep) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], sep))
		{
			result[j] = word_dup(&str[i], sep);
			j++;
			while (str[i] && !is_sep(str[i], sep))
				i++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
