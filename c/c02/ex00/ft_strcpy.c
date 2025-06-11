/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sambia-onerpm <sambia-onerpm@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:07:09 by salopes-          #+#    #+#             */
/*   Updated: 2025/06/11 12:04:28 by sambia-oner      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char src[] = "Samantha";
// 	char dest[9];

// 	printf("Esse é o src antes: %s\n", src);
// 	printf("Esse é o dest antes: %s\n", dest);

// 	ft_strcpy(dest, src);

// 	printf("Esse é o src depois da copia: %s\n", src);
// 	printf("Esse é o dest depois da copia: %s\n", dest);

// 	return 0;
// }
