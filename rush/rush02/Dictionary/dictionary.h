/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiancol <jgiancol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:00:57 by jgiancol          #+#    #+#             */
/*   Updated: 2025/06/15 01:01:01 by jgiancol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H

# include <stdlib.h>

typedef struct s_dict_item
{
	char				*key;
	char				*value;
	struct s_dict_item	*next;
}	t_dict_item;

typedef struct s_dictionary
{
	size_t			size;
	t_dict_item		**items;
}	t_dictionary;

t_dictionary	*create_dictionary(size_t size);
void			insert_item(t_dictionary *dict, const char *key, const char *value);
const char		*find_value(t_dictionary *dict, const char *key);
void			free_dictionary(t_dictionary *dict);

#endif