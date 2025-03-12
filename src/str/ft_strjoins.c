/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:56:50 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/12 14:18:54 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>

static size_t	count_len_array(char *str[]);

/**
 * @brief Allocates a new string, and returns the result of
 * a concatenation of all the strings from the array
 * last argument needs to be NULL.
 * 
 * @param str Array of strings
 * @return char* new string
 */
char	*ft_strjoins(char **str)
{
	size_t	count;
	size_t	index;
	size_t	size;
	char	*new_str;

	new_str = malloc(sizeof(char) * (count_len_array(str) + 1));
	index = 0;
	count = 0;
	while (str != NULL && str[count] != NULL)
	{
		size = ft_strlen(str[count]);
		ft_memcpy(&new_str[index], str[count++], size);
		index += size;
	}
	new_str[index] = '\0';
	return (new_str);
}

static size_t	count_len_array(char *str[])
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	while (str != NULL && str[index] != NULL)
		count += ft_strlen(str[index++]);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str1 = "test1";
// 	char *str2 = "test2";
// 	char *str3 = "test3";
// 	char *str4 = "test4";
// 	// char *str[] = {str1, str2, str3, str4, NULL};
// 	char *new;

// 	new = ft_strjoins((char *[]){str1, str2, str3, str4, NULL});
// 	printf("%s", new);
// 	free(new);
// }
