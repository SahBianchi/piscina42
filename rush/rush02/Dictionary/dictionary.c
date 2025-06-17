/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiancol <jgiancol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 22:55:07 by jgiancol          #+#    #+#             */
/*   Updated: 2025/06/14 23:29:45 by jgiancol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dictionary.h"
#include "libft.h"

static size_t	hash_function(const char *str, size_t table_size)
{
	size_t	hash;
	int		c;
	int		i;

	hash = 5381;
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		hash = ((hash << 5) + hash) + c;
		i++;
	}
	return (hash % table_size);
}

t_dictionary	*create_dictionary(size_t size)
{
	t_dictionary	*dict;
	size_t			i;

	dict = malloc(sizeof(t_dictionary));
	if (dict == 0)
	{
		return (0);
	}
	dict->size = size;
	dict->items = malloc(size * sizeof(t_dict_item *));
	if (dict->items == 0)
	{
		free(dict);
		return (0);
	}
	i = 0;
	while (i < size)
	{
		dict->items[i] = 0;
		i++;
	}
	return (dict);
}

void	insert_item(t_dictionary *dict, const char *key, const char *value)
{
	size_t			index;
	t_dict_item		*new_item;

	index = hash_function(key, dict->size);
	new_item = malloc(sizeof(t_dict_item));
	if (new_item == 0)
	{
		return ;
	}
	new_item->key = ft_strdup(key);
	new_item->value = ft_strdup(value);
	if (new_item->key == 0 || new_item->value == 0)
	{
		free(new_item->key);
		free(new_item->value);
		free(new_item);
		return ;
	}
	new_item->next = dict->items[index];
	dict->items[index] = new_item;
}

const char	*find_value(t_dictionary *dict, const char *key)
{
	size_t		index;
	t_dict_item	*current;

	index = hash_function(key, dict->size);
	current = dict->items[index];
	while (current != 0)
	{
		if (ft_strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (0);
}

void	free_dictionary(t_dictionary *dict)
{
	size_t		i;
	t_dict_item	*item;
	t_dict_item	*temp;

	i = 0;
	while (i < dict->size)
	{
		item = dict->items[i];
		while (item != 0)
		{
			temp = item;
			item = item->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(dict->items);
	free(dict);
}