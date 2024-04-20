/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:49:30 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/20 13:00:11 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	i = 0;
	u_s1 = (unsigned char *) s1;
	u_s2 = (unsigned char *) s2;
	while ((i < n) && (u_s1[i] || u_s2[i]))
	{
		if (u_s1[i] != u_s2[i])
		{
			return (u_s1[i] - u_s2[i]);
		}
		i++;
	}
	return (0);
}
