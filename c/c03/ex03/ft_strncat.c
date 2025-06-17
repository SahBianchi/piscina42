/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salopes- <salopes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:02:51 by salopes-          #+#    #+#             */
/*   Updated: 2025/06/16 22:21:34 by salopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

int	main(void)
{
	unsigned int nb = 2;
	char	dest[50] = "Hello ";
	char	word[] = "World!";

	ft_strncat(dest, word, nb);

	printf("%s\n", dest);

	return 0;
}