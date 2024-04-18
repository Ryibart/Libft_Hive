/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:59:19 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/18 19:44:04 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*u_b;
	unsigned char	u_c;

	i = 0;
	u_b = (unsigned char *)b;
	u_c = (unsigned char)c;
	while (i < n)
	{
		u_b[i] = u_c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main(void)
{
    char buffer[] = "lollol";
	printf("%s\n", buffer);
    ft_memset(buffer, 'A', sizeof(buffer));
	printf("%s\n", buffer);
    return 0;
}*/