/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:28:34 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/30 20:53:25 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "print_char.h"

#ifndef PRINT_STR
#define PRINT_STR
void	print_str(char *str)
{
	while (*str != '\0')
	{
		print_char(*str);
		str++;
	}
}
#endif