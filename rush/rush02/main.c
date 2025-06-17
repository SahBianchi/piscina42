/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiancol <jgiancol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:08:04 by jgiancol          #+#    #+#             */
/*   Updated: 2025/06/15 01:08:07 by jgiancol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"
#include "file_processor.h"
#include "converter.h"
#include "libft.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_dictionary	*dict;
	char			*dict_path;
	char			*number_to_convert;
	int				status;

	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
	{
		dict_path = "numbers.dict";
		number_to_convert = argv[1];
	}
	else
	{
		dict_path = argv[1];
		number_to_convert = argv[2];
	}
	dict = create_dictionary(101);
	if (dict == 0)
	{
		write(2, "Dict Error\n", 11);
		return (1);
	}
	status = process_dictionary_file(dict, dict_path);
	if (status == -1)
	{
		write(2, "Dict Error\n", 11);
		free_dictionary(dict);
		return (1);
	}
	status = convert_number_to_words(dict, number_to_convert);
	if (status == -1)
	{
		write(2, "Dict Error\n", 11);
	}
	else
	{
		write(1, "\n", 1);
	}
	free_dictionary(dict);
	return (0);
}