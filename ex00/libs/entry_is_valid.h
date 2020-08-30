/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   entry_is_valid.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: saamian <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:13:04 by saamian       #+#    #+#                 */
/*   Updated: 2020/08/30 20:52:47 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "str_length.h"

#ifndef ENTRY_IS_VALID
#define ENTRY_IS_VALID
int entry_is_valid(char *str)
{

	if (str[0] == '\0')
	{
		return (0);
	}
	if ((int)str_length(str) > 48)
	{
		return (0);
	}
	return (1);
}
#endif