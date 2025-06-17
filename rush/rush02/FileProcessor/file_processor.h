/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_processor.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiancol <jgiancol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:11:04 by jgiancol          #+#    #+#             */
/*   Updated: 2025/06/15 01:11:06 by jgiancol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_PROCESSOR_H
# define FILE_PROCESSOR_H

# include "dictionary.h"

int	process_dictionary_file(t_dictionary *dict, const char *filepath);

#endif