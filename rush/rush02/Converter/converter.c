/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiancol <jgiancol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 00:09:44 by jgiancol          #+#    #+#             */
/*   Updated: 2025/06/15 00:56:57 by jgiancol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.h"
#include "libft.h"
#include <unistd.h>

static int	print_with_space(const char *str, int *first_word)
{
	if (*first_word == 0)
	{
		write(1, " ", 1);
	}
	write(1, str, ft_strlen(str));
	*first_word = 0;
	return (0);
}

static int	print_value_from_key(t_dictionary *dict, const char *key, int *first_word)
{
	const char	*value;

	value = find_value(dict, key);
	if (value == 0)
	{
		return (-1);
	}
	print_with_space(value, first_word);
	return (0);
}

static int	convert_tens(t_dictionary *dict, char n1, char n2, int *first_word)
{
	char	key[3];

	key[2] = '\0';
	if (n1 == '1')
	{
		key[0] = n1;
		key[1] = n2;
		return (print_value_from_key(dict, key, first_word));
	}
	if (n1 > '1')
	{
		key[0] = n1;
		key[1] = '0';
		if (print_value_from_key(dict, key, first_word) == -1)
			return (-1);
	}
	if (n2 > '0')
	{
		key[0] = n2;
		key[1] = '\0';
		if (print_value_from_key(dict, key, first_word) == -1)
			return (-1);
	}
	return (0);
}

static int	convert_three_digits(t_dictionary *dict, const char *group, int *first_word)
{
	int		len;
	char	key[2];

	key[1] = '\0';
	len = ft_strlen(group);
	
	// Passo 1: Trata a centena, se existir.
	if (len == 3 && group[0] != '0')
	{
		key[0] = group[0];
		if (print_value_from_key(dict, key, first_word) == -1)
			return (-1);
		if (print_value_from_key(dict, "100", first_word) == -1)
			return (-1);
	}

	// Passo 2: Trata as dezenas e unidades.
	// Esta parte agora é executada mesmo que a centena seja zero.
	if (len >= 2)
	{
		// Só processa se o resto não for "00"
		if (group[len - 2] != '0' || group[len - 1] != '0')
		{
			if (convert_tens(dict, group[len - 2], group[len - 1], first_word) == -1)
				return (-1);
		}
	}
	else if (len == 1 && group[0] != '0') // Caso especial para grupos de 1 dígito
	{
		key[0] = group[0];
		if (print_value_from_key(dict, key, first_word) == -1)
			return (-1);
	}
	return (0);
}

int	convert_number_to_words(t_dictionary *dict, const char *number)
{
	int		len;
	int		first_group;
	int		first_word;
	int		group_len;
	int		group_start;
	char	group_buffer[4];
	char	scale_key[40];

	len = ft_strlen(number);
	if (len == 1 && number[0] == '0')
		return (print_with_space("zero", &first_word));
	first_group = 1;
	first_word = 1;
	group_start = 0;
	while (group_start < len)
	{
		group_len = (len - group_start) % 3;
		if (group_len == 0)
			group_len = 3;
		ft_strncpy(group_buffer, number + group_start, group_len);
		group_buffer[group_len] = '\0';
		if (ft_strcmp(group_buffer, "000") != 0)
		{
			if (first_group == 0)
				print_with_space(" ", &first_word);
			if (convert_three_digits(dict, group_buffer, &first_word) == -1)
				return (-1);
			if ((len - group_start - group_len) > 0)
			{
				scale_key[0] = '1';
				ft_memset(scale_key + 1, '0', len - group_start - group_len);
				scale_key[1 + len - group_start - group_len] = '\0';
				if (print_value_from_key(dict, scale_key, &first_word) == -1)
					return (-1);
			}
		}
		first_group = 0;
		group_start = group_start + group_len;
	}
	return (0);
}