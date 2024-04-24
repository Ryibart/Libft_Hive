/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:43:43 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 12:50:38 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	actual_len;

	i = 0;
	actual_len = len;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		actual_len = ft_strlen(s) - start;
	ret = malloc(actual_len + 1);
	if (!ret)
		return (0);
	while (i < actual_len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[actual_len] = '\0';
	return (ret);
}
