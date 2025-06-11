/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:20:04 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/06/11 13:21:49 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("ABCZ"));
// 	printf("%d\n", ft_str_is_lowercase("abc"));
// 	printf("%d\n", ft_str_is_lowercase(""));
// 	printf("%d\n", ft_str_is_lowercase("00001"));
// 	printf("%d\n", ft_str_is_lowercase("ABCdef"));
// 	printf("%d\n", ft_str_is_lowercase("&#()"));
// }
