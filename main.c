/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:14 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/05 17:51:46 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		test;
	char	*test_string;
	char	*test_string2;
	char	*pointer;
	char	*pointer2;
	size_t	count;

	test_string = "Je suis une string";
	test_string2 = "Je suis une String";
	test = 'C';
	if ((ft_isalpha(test) && isalpha(test))
		|| ft_isalpha(test) == isalpha(test))
		printf("isalpha OK\n");
	else
		printf("ft_isalpha(): %d et isalpha(): %d\n", ft_isalpha(test),
			isalpha(test));
	test = 5;
	if ((ft_isdigit(test) && isdigit(test))
		|| ft_isdigit(test) == isdigit(test))
		printf("isdigit OK\n");
	else
		printf("ft_isdigit(): %d et isdigit(): %d\n", ft_isdigit(test),
			isdigit(test));
	test = 5;
	if ((ft_isalnum(test) && isalnum(test))
		|| ft_isalnum(test) == isalnum(test))
		printf("isalnum OK with %d\n", test);
	else
		printf("ft_isalnum(): %d et isalnum(): %d\n", ft_isalnum(test),
			isalnum(test));
	test = '+';
	if ((ft_isalnum(test) && isalnum(test))
		|| ft_isalnum(test) == isalnum(test))
		printf("isalnum OK with %c, %d\n", test, test);
	else
		printf("ft_isalnum(): %d et isalnum(): %d\n", ft_isalnum(test),
			isalnum(test));
	test = 5;
	if ((ft_isascii(test) && isascii(test))
		|| ft_isascii(test) == isascii(test))
		printf("isascii OK with %d\n", test);
	else
		printf("ft_isascii(): %d et isascii(): %d\n", ft_isascii(test),
			isascii(test));
	test = 21954;
	if ((ft_isascii(test) && isascii(test))
		|| ft_isascii(test) == isascii(test))
		printf("isascii OK with %d\n", test);
	else
		printf("ft_isascii(): %d et isascii(): %d\n", ft_isascii(test),
			isascii(test));
	test = 5;
	if ((ft_isprint(test) && isprint(test))
		|| ft_isprint(test) == isprint(test))
		printf("isprint OK with %d\n", test);
	else
		printf("ft_isprint(): %d et isprint(): %d\n", ft_isprint(test),
			isprint(test));
	test = 21954;
	if ((ft_isprint(test) && isprint(test))
		|| ft_isprint(test) == isprint(test))
		printf("isprint OK with %d\n", test);
	else
		printf("ft_isprint(): %d et isprint(): %d\n", ft_isprint(test),
			isprint(test));
	if (ft_strlen(test_string) == strlen(test_string))
		printf("strlen OK\n");
	else
		printf("ft_strlen(): %ld et strlen(): %ld\n", ft_strlen(test_string),
			strlen(test_string));
	test = '5';
	if (ft_toupper(test) == toupper(test))
		printf("toupper OK\n");
	else
		printf("ft_toupper(): %d et toupper(): %d\n", ft_toupper(test),
			toupper(test));
	test = 'c';
	if (ft_toupper(test) == toupper(test))
		printf("toupper OK\n");
	else
		printf("ft_toupper(): %d et toupper(): %d\n", ft_toupper(test),
			toupper(test));
	test = 'C';
	if (ft_toupper(test) == toupper(test))
		printf("toupper OK\n");
	else
		printf("ft_toupper(): %d et toupper(): %d\n", ft_toupper(test),
			toupper(test));
	test = '5';
	if (ft_tolower(test) == tolower(test))
		printf("tolower OK\n");
	else
		printf("ft_tolower(): %d et tolower(): %d\n", ft_tolower(test),
			tolower(test));
	test = 'c';
	if (ft_tolower(test) == tolower(test))
		printf("tolower OK\n");
	else
		printf("ft_tolower(): %d et tolower(): %d\n", ft_tolower(test),
			tolower(test));
	test = 'C';
	if (ft_tolower(test) == tolower(test))
		printf("tolower OK\n");
	else
		printf("ft_tolower(): %d \net tolower(): %d\n", ft_tolower(test),
			tolower(test));
	test = 's';
	pointer = ft_strchr(test_string, test);
	pointer2 = strchr(test_string, test);
	if (pointer != NULL && pointer == pointer2)
		printf("strchr OK at \"%s\"\n", pointer);
	else if (pointer == NULL && pointer == pointer2)
		printf("strchr OK, char not found\n");
	else
		printf("ft_strchr(): %s \net strchr(): %s\n", pointer, pointer2);
	test = 's';
	pointer = ft_strrchr(test_string, test);
	pointer2 = strrchr(test_string, test);
	if (pointer != NULL && pointer == pointer2)
		printf("strrchr OK at \"%s\"\n", pointer);
	else if (pointer == NULL && pointer == pointer2)
		printf("strrchr OK, char not found\n");
	else
		printf("ft_strrchr(): \"%s\" \net strrchr(): \"%s\"\n", pointer,
			pointer2);
	test = 5;
	if (ft_strncmp(test_string, test_string2, test) == strncmp(test_string,
			test_string2, test))
		printf("strncmp OK\n");
	else
		printf("ft_strncmp(): %d \net strncmp(): %d\n", ft_strncmp(test_string,
				test_string2, test), strncmp(test_string, test_string2, test));
	test = 25;
	if (ft_strncmp(test_string, test_string2, test) == strncmp(test_string,
			test_string2, test))
		printf("strncmp OK\n");
	else
		printf("ft_strncmp(): %d \net strncmp(): %d\n", ft_strncmp(test_string,
				test_string2, test), strncmp(test_string, test_string2, test));
	count = 5;
	(void)count;
	test = 64;
	// test_string2 = test_string;
	// ft_memset(test_string, test, count);
	// printf("%s\n", test_string);
	// if (ft_memset(test_string, test, count) == memset(test_string2, test,
	// 		count))
	// 	printf("memset OK\n");
	// else
	// 	printf("ft_memset(): %p \net memset(): %p\n", ft_memset(test_string,
	// 			test, count), memset(test_string, test, count));
	count = 5;
	(void)count;
	test = 64;
	// test_string = "Je suis une string";
	// test_string2 = test_string;
	// ft_memset(test_string, test, count);
	// printf("%s\n", test_string);
	// if (ft_memset(test_string, test, count) == memset(test_string, test,
	// count))
	// 	printf("memset OK\n");
	// else
	// 	printf("ft_memset(): %p \net memset(): %p\n", ft_memset(test_string,
	// 			test, count), memset(test_string, test, count));
	// test = 's';
	// test_string2 = "suis";
	// pointer = ft_strnstr(test_string, test_string2, count);
	// pointer2 = strnstr(test_string, test_string2, count);
	// if (pointer != NULL && pointer == pointer2)
	// 	printf("strnstr OK at \"%s\"\n", pointer);
	// else if (pointer == NULL && pointer == pointer2)
	// 	printf("strnstr OK, string not found\n");
	// else
	// 	printf("ft_strnstr(): %s \net strnstr(): %s\n", pointer, pointer2);
	test_string = "  -650090";
	if (ft_atoi(test_string) == atoi(test_string))
		printf("atoi OK");
	else
		printf("ft_atoi(): %d \net atoi(): %d\n", ft_atoi(test_string),
			atoi(test_string));
}
