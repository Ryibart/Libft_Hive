/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:50:25 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/18 19:44:01 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*u_s;

	i = 0;
	u_s = (unsigned char *)s;
	while (i < n)
	{
		u_s[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
int main(void)
{
    char buffer[] = "lollol";
	printf("%s\n", buffer);
    ft_bzero(buffer, sizeof(buffer));
	printf("%s\n", buffer);
    return 0;
}
*/