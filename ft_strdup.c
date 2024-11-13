/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:30:55 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/13 11:27:29 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

/**
 * @brief Create a copy of source into a new pointer
 *	NEEDS to be freed
 * @param source
 * @return char*
 */
char	*ft_strdup(const char *source)
{
	char	*pointer;
	size_t	count;
	size_t	index;

	count = ft_strlen(source);
	pointer = malloc(sizeof(char) * (count + 1));
	if (pointer == NULL)
		return (NULL);
	index = 0;
	while (count > 0)
	{
		pointer[index] = source[index];
		index++;
		count--;
	}
	pointer[index] = '\0';
	return (pointer);
}
