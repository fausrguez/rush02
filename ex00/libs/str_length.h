/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str_length.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/29 19:41:09 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/30 20:43:36 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_LENGTH
#define STR_LENGTH
unsigned int	str_length(const char *str)
{
	unsigned int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}
#endif