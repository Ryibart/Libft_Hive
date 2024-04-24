/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:59:18 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 13:35:01 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	ret = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ret)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i + k] && s[i + k] != c)
				k++;
			ret[j] = malloc(k + 1);
			if (!ret[j])
				return (0);
			ft_strlcpy(ret[j], s + i, k + 1);
			i += k;
			j++;
		}
		i++;
	}
	ret[j] = 0;
	return (ret);
}
