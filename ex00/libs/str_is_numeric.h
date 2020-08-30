/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   str_is_numeric.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: saamian <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:13:25 by saamian       #+#    #+#                 */
/*   Updated: 2020/08/30 20:53:50 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_IS_NUMERIC
#define STR_IS_NUMERIC
int str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
#endif