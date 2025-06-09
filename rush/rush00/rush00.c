/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02(1).c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salopes- <salopes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 10:31:19 by salopes-          #+#    #+#             */
/*   Updated: 2025/06/01 17:07:03 by salopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	validate(int x, int y)
{
	if (x <= 0 || y <= 0 || x > 500 || y > 500)
	{
		write(2, "Error: Invalid dimensions\n", 26);
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	if (!validate(x, y))
		return ;
	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((line == 1 && column == 1) || (line == 1 && column == x))
				ft_putchar('A');
			else if ((line == y && column == 1) || (line == y && column == x))
				ft_putchar('C');
			else if (line == 1 || line == y || column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
