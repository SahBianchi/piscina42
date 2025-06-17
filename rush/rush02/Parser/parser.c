/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_nosso.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salopes- <salopes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 22:13:01 by jgiancol          #+#    #+#             */
/*   Updated: 2025/06/15 15:26:35 by salopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

#define MAX_KEY_LEN 40
#define MAX_VALUE_LEN 128

void	process_buffer(t_dictionary *dict, char *buffer, ssize_t bytes_read)
{
	static char	key_buffer[MAX_KEY_LEN];
	static char	value_buffer[MAX_VALUE_LEN];
	static int	key_idx = 0;
	static int	value_idx = 0;
	static int	state = 0;
	int			i;
	char		c;

	i = 0;
	while (i < bytes_read)
	{
		c = buffer[i];
		if (c == '\n')
		{
			while (value_idx > 0 && ft_isspace(value_buffer[value_idx - 1]))
			{
				value_idx--;
			}
			if (key_idx > 0 && value_idx > 0)
			{
				key_buffer[key_idx] = '\0';
				value_buffer[value_idx] = '\0';
				insert_item(dict, key_buffer, value_buffer);
			}
			key_idx = 0;
			value_idx = 0;
			state = 0;
		}
		else if (state == 0)
		{
			if (c >= '0' && c <= '9')
				key_buffer[key_idx++] = c;
			else if (c == ':')
				state = 2;
			else if (ft_isspace(c))
				state = 1;
		}
		else if (state == 1)
		{
			if (c == ':')
				state = 2;
			else if (!ft_isspace(c))
			{
				key_idx = 0;
				state = 0;
			}
		}
		else if (state == 2)
		{
			if (!ft_isspace(c))
			{
				value_buffer[value_idx++] = c;
				state = 3;
			}
		}
		else if (state == 3)
		{
			value_buffer[value_idx++] = c;
		}
		i++;
	}
}
