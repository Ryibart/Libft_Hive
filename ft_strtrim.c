/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:26:52 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 12:58:37 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;
	size_t	trimmed_len;

	start = 0;
	end = 0;
	if (!s1 || !set)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	trimmed_len = ft_strlen(s1 + start);
	while (trimmed_len && ft_strchr(set, s1[start + trimmed_len - 1]))
		trimmed_len--;
	ret = malloc(trimmed_len + 1);
	if (!ret)
		return (0);
	while (end < trimmed_len)
	{
		ret[end] = s1[start + end];
		end++;
	}
	ret[end] = '\0';
	return (ret);
}
