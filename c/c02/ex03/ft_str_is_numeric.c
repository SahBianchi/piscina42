/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 12:56:47 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/06/11 13:07:46 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("123456"));
// 	printf("%d\n", ft_str_is_numeric("123abc"));
// 	printf("%d\n", ft_str_is_numeric(""));
// 	printf("%d\n", ft_str_is_numeric("00001"));
// 	printf("%d\n", ft_str_is_numeric("42!"));
// 	printf("%d\n", ft_str_is_numeric("42"));
// }
