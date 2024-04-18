/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:06:31 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/18 19:44:05 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	i = n;
	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	if ((dst > src) && (dst < src + n) && (src < dst + n))
	{
		while (i > 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (s1);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Test case 1: Non-overlapping memory areas
    char src1[] = "LOL";
    char dst1[20] = "\0sf";
	char src2[] = "LOL";
    char dst2[20] = "\0sf";
    ft_memmove(dst1, dst1 + 2, 4);
    printf("ft_memmove: %s\n", dst1);
    memmove(dst2, dst2 + 2, 4);
    printf("memmove: %s\n", dst2);

    return 0;
}
*/