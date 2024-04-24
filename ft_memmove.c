/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:06:31 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 12:29:37 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	i = 0;
	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	if (!dst && !src)
		return (0);
	else if ((dst > src) && (dst < src + n) && (src < dst + n))
	{
		i = n;
		while (i--)
			dst[i] = src[i];
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

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void print_memory(const unsigned char *mem, size_t n) {
//     for (size_t i = 0; i < n; i++) {
//         printf("%02X ", mem[i]);
//     }
//     printf("\n");
// }

// int main() {
//     unsigned char buffer[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//     // Test scenario with backward overlap
//     printf("Original buffer: ");
//     print_memory(buffer, 10);

//     printf("\nBackward overlap test:\n");
//     ft_memmove(buffer + 4, buffer, 6);
//     printf("After my_memmove(buffer + 4, buffer, 6): ");
//     print_memory(buffer, 10);

//     // Test scenario without overlap
//     unsigned char buffer2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     printf("\nNo overlap test:\n");
//     ft_memmove(buffer2 + 5, buffer2, 4);
//     printf("After my_memmove(buffer2 + 5, buffer2, 4): ");
//     print_memory(buffer2, 10);

//     return 0;
// }
