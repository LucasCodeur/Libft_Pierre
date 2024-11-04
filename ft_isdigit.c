/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:20 by ppontet           #+#    #+#             */
/*   Updated: 2024/11/04 16:01:07 by ppontet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//could return 1024 or 0x10000000000 instead of 1
/**
 * @brief Check if arg is a char
 * 
 * @param character 
 * @return int 0 not char, anything else is char
 */
int ft_isdigit( int character )
{
    if ((character >= '0' && character <= '9'))
		return (1);	
	return (0);
}