/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:00:47 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/05/23 16:53:47 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c){
    write(1, &c, 1);
}

void    ft_print_number(int num){
    if(num < 10)
        ft_putchar('0');
    else
        ft_putchar((num / 10) + '0');
    ft_putchar((num % 10) + '0');
}

void    ft_print_comb2(void){
    int a;
    int b;

    a = 0;
    while (a <= 98){
        b = a + 1;
        while (b <= 99){
            ft_print_number(a);
            ft_putchar(' ');
            ft_print_number(b);
            if (a != 98 || b != 99){
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}