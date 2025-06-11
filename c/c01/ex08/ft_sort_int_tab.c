/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:57:11 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/06/11 11:50:52 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	num;

	i = 0;
	while (i < size)
	{
		num = 0;
		while (num < size - i - 1)
		{
			if (tab[num] > tab[num + 1])
				ft_swap(&tab[num], &tab[num + 1]);
			num++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	array[] = {3, 2, 9, 1, 5, 6, 7, 11};
// 	int	size = sizeof(array) / sizeof(array[0]);

// 	printf("\nArray inicial: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	ft_sort_int_tab(array, size);
// 	printf("\nArray ordenado: ");
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array[i]);
// 	}
// 	return (0);
// }
