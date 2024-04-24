/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:18:16 by rtammi            #+#    #+#             */
/*   Updated: 2024/04/24 18:01:02 by rtammi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	long	digit;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		if (result > (9223372036854775807) / 10)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		digit = *str - '0';
		result = result * 10 + digit;
		str++;
	}
	return ((int)result * sign);
}
//  #include <stdlib.h>
// #include <stdio.h>
// #include <limits.h>
// #include <string.h>

// int main(void)
// {
//     char *s = "-21474836481111111111111111111111111111111111";
//     char *str;

//     int i = 2;
//     while (i < 40)
//     {
//         str = malloc(i + 1);
//         memcpy(str, s, i);
//         str[i] = 0;
//         printf("%s\n", str);
//         printf("%i\n", atoi(str));
//         printf("%i\n\n", ft_atoi(str));
//         free(str);
//         i++;
//     }
// }

// #include <stdlib.h>
// #include <stdio.h>
// #include <limits.h>

// int main() {
// 	char str[] = " -1234ab567";
// 	char str2[] = "-9223372036854775808";
// 	char str3[] = "+9223372036854775807";
// 	char str4[] = "0";
// 	char str5[] = "-21474836481111111111111111111111111111111111";
// 	char str6[] = "-214748364811111";
// 	char str7[] = "     		-978979a9tdsfa";
// 	int result = ft_atoi(str);
// 	int result2 = ft_atoi(str2);
// 	int result3 = ft_atoi(str3);
// 	int result4 = ft_atoi(str4);
// 	int result5 = ft_atoi(str5);
// 	int result6 = ft_atoi(str6);
// 	int result7 = ft_atoi(str7);	
// 	printf("Your result: %d\n", result);
// 	printf("Correct result: %d\n", atoi(str));
// 	printf("Your result: %d\n", result2);
// 	printf("Correct result: %d\n", atoi(str2));
// 	printf("Your result: %d\n", result3);
// 	printf("Correct result: %d\n", atoi(str3));
// 	printf("Your result: %d\n", result4);
// 	printf("Correct result: %d\n", atoi(str4));
// 	printf("Your result: %d\n", result5);
// 	printf("Correct result: %d\n", atoi(str5));
// 	printf("Your result: %d\n", result6);
// 	printf("Correct result: %d\n", atoi(str6));
// 	printf("Your result: %d\n", result7);
// 	printf("Correct result: %d\n", atoi(str7));

// 	return (0);
// }
