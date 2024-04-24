/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:59:18 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 18:04:19 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			ret++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	ret = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ret)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i + k] != c && s[i + k] != '\0')
				k++;
			ret[j] = malloc(k + 1);
			if (!ret[j])
				return (0);
			ft_strlcpy(ret[j], s + i, k + 1);
			i += k;
			j++;
		}
		else
			i++;
	}
	ret[j] = 0;
	return (ret);
}
