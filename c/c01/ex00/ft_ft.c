/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:26:57 by sambia-oner       #+#    #+#             */
/*   Updated: 2025/05/28 18:04:29 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>
#include <stdio.h>

void    ft_ft(int *nbr){
	*nbr = 42;
}

int main (void){
	int x = 0;
	ft_ft(&x);
	printf("%d\n", x);
}