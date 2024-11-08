/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:19:49 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/08 11:03:55 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

//@TODO Passe 4 tests, mais pas tous
/**
 * @brief
 *
 * @param destination
 * @param source
 * @param size
 * @return void*
 */
void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char		*dest_pointer;
	const unsigned char	*src_pointer;

	dest_pointer = (unsigned char *)destination;
	src_pointer = (const unsigned char *)source;
	if (dest_pointer > src_pointer && dest_pointer < (src_pointer + size))
	{
		dest_pointer += size;
		src_pointer += size;
		while (size-- > 0)
			*(--dest_pointer) = *(--src_pointer);
	}
	else
	{
		while (size-- > 0)
			*(dest_pointer++) = *(src_pointer++);
	}
	return ((unsigned char *)destination);
}
