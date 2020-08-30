/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   entry_is_valid.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: saamian <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:13:04 by saamian       #+#    #+#                 */
/*   Updated: 2020/08/30 18:13:16 by saamian       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "str_length.h"

int entry_is_valid(char *str)
{

	if (str[0] == '\0')
	{
		return (0);
	}
	if (str_length(str) > 48)
	{
		return (0);
	}
	return (1);
}
