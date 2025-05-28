/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:13:44 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/05/28 18:22:04 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>

void ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (void){
    int a = 2;
    int b = 3;
    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}