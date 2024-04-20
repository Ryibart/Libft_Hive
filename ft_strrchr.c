/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:51:02 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/20 12:48:03 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	u_c;

	i = ft_strlen(s) - 1;
	u_c = (char)c;
	while (i >= 0)
	{
		if (s[i] == u_c)
			return ((char *)&s[i]);
		i--;
	}
	if (u_c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (0);
}
