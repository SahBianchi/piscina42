/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:24:18 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/05/28 18:35:56 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

int main(void){
    int a = 10;
    int b = 3;
    int div;
    int mod;
    ft_div_mod(a, b, &div, &mod);
    printf("%d\n", div);
    printf("%d\n", mod);
}
