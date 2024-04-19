/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:08:24 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/19 16:05:41 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	if (i >= size)
		return (size);
	while (src[j] != '\0' && j != size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	test1[10] = "abc";
	char	test2[10] = "defg";
	char	test3[10] = "abc";
	char	test4[10] = "defg";

	printf("strlcat: %lu\n", strlcat(test1, test2, sizeof(test1)));
	printf("strlcat: %s\n", test1);

	printf("ft_strlcat: %lu\n", ft_strlcat(test3, test4, sizeof(test3)));
	printf("ft_strlcat: %s\n", test3);
	return (0);
}
*/
