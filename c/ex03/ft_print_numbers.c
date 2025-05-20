/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:55:06 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/05/20 20:14:13 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    number;

    number = '0';
    while (number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}
