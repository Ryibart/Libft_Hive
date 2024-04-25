/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:37:53 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/25 18:42:05 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

void	free_split(char **arr, int count)
{
	if (arr)
	{
		while (--count >= 0)
			free(arr[count]);
	}
	free(arr);
}

char	**split(const char *s, char **ret, char c, int *i)
{
	size_t		word_len;
	const char	*end;

	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			end = ft_strchr(s, c);
			if (end)
				word_len = end - s;
			else
				word_len = ft_strlen(s);
			ret[*i] = ft_substr(s, 0, word_len);
			if (!ret[*i])
			{
				free_split(ret, *i);
				return (0);
			}
			(*i)++;
			s += word_len;
		}
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		word_count;

	i = 0;
	word_count = count_words(s, c);
	if (!s)
		return (0);
	ret = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!ret)
		return (0);
	if (!split(s, ret, c, &i))
		return (0);
	ret[i] = 0;
	return (ret);
}
