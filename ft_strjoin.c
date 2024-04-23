/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 21:05:43 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/23 21:15:14 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*empty_string(void)
{
	char	*empty_str;

	empty_str = (char *)malloc(sizeof(char));
	if (empty_str == NULL)
		return (NULL);
	empty_str[0] = '\0';
	return (empty_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined_str;
	int		full_length;
	int		i;

	i = 0;
	full_length = 0;
	if (size == 0)
		empty_string();
	while (i < size)
	{
		full_length += ft_strlen(strs[i]); // length of all strings
		i++;
	}
	full_length += (size - 1) * ft_strlen(sep);
	joined_str = (char *)malloc(sizeof(char) * (full_length + 1)); // +1 for the null terminator
	if (joined_str == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strlcat(joined_str, strs[i], sizeof(joined_str));
		if (i < size - 1)
			ft_strlcat(joined_str, sep, sizeof(joined_str));
		i++;
	}
	return (joined_str);
}
