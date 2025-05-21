/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:02:45 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/05/20 21:42:36 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void)
{
    char    first_digit;
    char    second_digit;
    char    third_digit;

    first_digit = '0';
    while (first_digit <= '7'){
        second_digit = first_digit + 1;
        while (second_digit <= '8'){
            third_digit = second_digit + 1;
            while (third_digit <= '9'){
                write(1, &first_digit, 1);
                write(1, &second_digit, 1);
                write(1, &third_digit, 1);
                if (!(first_digit == '7' && second_digit == '8' && third_digit == '9')) {
                    write(1, ", ", 2);
                }
                third_digit++;
            }
            second_digit++;
        }
        first_digit++;
    }
}
