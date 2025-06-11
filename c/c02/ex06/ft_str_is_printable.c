/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:23:10 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/06/11 13:30:12 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello!"));
	printf("%d\n", ft_str_is_printable("ABC 123!@#"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("\tHello"));
	printf("%d\n", ft_str_is_printable("Hi\n"));
}
