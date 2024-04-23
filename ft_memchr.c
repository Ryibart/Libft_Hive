/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:29:39 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/23 12:19:27 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*u_s;
	unsigned char		u_c;

	i = 0;
	u_s = (unsigned char *)s;
	u_c = (unsigned char)c;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (u_s[i] == u_c)
			return ((void *)u_s + i);
		i++;
	}
	return (0);
}
