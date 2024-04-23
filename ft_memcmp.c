/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:56:38 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/23 12:19:26 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	i = 0;
	u_s1 = (unsigned char *) s1;
	u_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (u_s1[i] != u_s2[i])
		{
			return (u_s1[i] - u_s2[i]);
		}
		i++;
	}
	return (0);
}
