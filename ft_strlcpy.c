/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:16:30 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/19 16:07:29 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, world!";
    char dst[20];
    size_t result = ft_strlcpy(dst, src, sizeof(dst));
    printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", result);

	char src2[] = "Hello, world!";
    char dst2[20];
    size_t result2 = strlcpy(dst2, src2, sizeof(dst2));
    printf("Copied string: %s\n", dst2);
    printf("Length of copied string: %zu\n", result2);
    return 0;
}
*/