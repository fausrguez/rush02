/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   open_record.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 21:23:12 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/30 21:23:14 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "is_the_same_str.h"
#include "print_str.h"
#include "print_char.h"

#define OPEN_RECORD
#ifndef OPEN_RECORD
void	open_record(char ***dictionary, char *n_record)
{
	int record;

	record = 0;
	while(record < 50)
	{
		if(is_the_same_str(n_record, dictionary[record][0]))
		{
			print_str(dictionary[record][1]);
			print_char('\n');
			return ;
		}
		record++;
	}
	print_str("Error\n");
	return ;
}
#endif
