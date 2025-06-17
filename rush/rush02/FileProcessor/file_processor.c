/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_processor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiancol <jgiancol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 23:36:37 by jgiancol          #+#    #+#             */
/*   Updated: 2025/06/14 23:36:39 by jgiancol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "file_processor.h"
#include "parser.h"

#define BUFFER_SIZE 4096

int	process_dictionary_file(t_dictionary *dict, const char *filepath)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	ssize_t	bytes_read;

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		process_buffer(dict, buffer, bytes_read);
	}
	close(fd);
	if (bytes_read == -1)
	{
		return (-1);
	}
	return (0);
}