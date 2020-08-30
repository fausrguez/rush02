/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   concat_str.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:20:33 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/30 20:52:24 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "str_length.h"

#ifndef CONCAT_STR
#define CONCAT_STR
char *concat_str(char *str1, char *str2)
{
	unsigned int str1_size;
	unsigned int str2_size;
	unsigned int c;
	char *res;

	str1_size = str_length(str1);
	str2_size = str_length(str2);
	res = (char*)malloc((str1_size + str2_size + 1) * sizeof(char));
	c = 0;
	while (*str1 != '\0')
	{
		res[c] = *str1;
		str1++;
		c++;
	}
	while (*str2 != '\0')
	{
		res[c] = *str2;
		str2++;
		c++;
	}
	res[c] = '\0';
	return (res);
}
#endif