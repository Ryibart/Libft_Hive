/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:53:03 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 18:09:54 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = malloc(size + 1);
	if (!str)
		return (0);
	ft_bzero(str, size + 1);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	if (!s || !f)
		return (0);
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (0);
	i = -1;
	while (s[++i])
		new[i] = f(i, s[i]);
	return (new);
}
