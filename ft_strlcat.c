/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:08:24 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/19 17:06:35 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			dst_len;
	size_t			src_len;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	dst_len = i;
	src_len = ft_strlen(src);
	while (*src != '\0' && i < size - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	if (dst_len >= size)
		return (src_len + size);
	else
		return (src_len + dst_len);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	test1[10] = "abc";
// 	char	test2[10] = "defg";
// 	char	test3[10] = "abc";
// 	char	test4[10] = "defg";

// 	printf("strlcat: %lu\n", strlcat(test1, test2, sizeof(test1)));
// 	printf("strlcat: %s\n", test1);

// 	printf("ft_strlcat: %lu\n", ft_strlcat(test3, test4, sizeof(test3)));
// 	printf("ft_strlcat: %s\n", test3);
// 	return (0);
// }
