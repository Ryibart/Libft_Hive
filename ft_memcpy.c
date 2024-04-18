/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:12:58 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/18 19:44:05 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict s1, const void *restrict s2, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	i = 0;
	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
/*
#include "stdio.h"
int	main(void)
{
	char	s1[] = "AAAAAA";
	char	s2[] = "BBBBBB";

	printf("%s, %s\n", s1, s2);
	ft_memcpy(s1, s2, 3);
	printf("%s, %s\n", s1, s2);
	return (0);
}
*/