/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_char.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:28:27 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/30 20:52:06 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

#ifndef PRINT_CHAR
#define PRINT_CHAR
void print_char(char c)
{
	write(1, &c, 1);
}
#endif
