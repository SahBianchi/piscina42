/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:38:45 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/05/28 18:43:38 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(void){
    int a = 10;
    int b = 3;

    ft_ultimate_div_mod(&a, &b);
    printf("%d \n", a);
    printf("%d \n", b);
}