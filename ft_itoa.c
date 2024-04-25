/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:03:58 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/25 18:43:15 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	absolute_value(int n)
{
	if (n == -2147483648)
		return (-(n + 1) + 1);
	if (n < 0)
		return (-n);
	return (n);
}

int	digit_count(int n)
{
	int	count;
	int	temp;

	count = 1;
	temp = n;
	if (n < 0)
		count = 2;
	while (temp / 10 != 0)
	{
		temp /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	abs_n;
	char			*str;

	len = digit_count(n);
	abs_n = absolute_value(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = (abs_n % 10) + '0';
		abs_n /= 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
