/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:58:58 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 18:26:13 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_count(int n)
{
	if (n == 0)
		return (1);
	if (n < 0 && n != -2147483648)
		n = -n;
	return (1 + digit_count(n / 10) * (n / 10 != 0));
}

char	*ft_int_min(char **str, char **min_str)
{
	int	i;

	i = -1;
	*min_str = "-2147483648";
	*str = (char *)malloc(sizeof(char) * (12));
	if (str == 0)
		return (0);
	while (i++ < 12)
		str[i] = min_str[i];
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*min_str;
	char	*str;
	int		i;

	i = -1;
	len = digit_count(n);
	neg = n < 0;
	str = 0;
	if (n == -2147483648)
		ft_int_min(&str, &min_str);
	if (neg)
		n = -n;
	*str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
