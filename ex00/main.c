/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: saamian <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:12:25 by saamian       #+#    #+#                 */
/*   Updated: 2020/08/30 18:12:30 by saamian       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libs/str_is_numeric.h"
#include "libs/entry_is_valid.h"
#include "libs/print_str.h"

int main(int argc, char *argv[])
{
	char *n_record;
	char *entry_value;

	if (argc < 2 || argc > 3)
	{
		print_str("Error\n");
		return (0);
	}

	if (argc == 2)
	{
		n_record = argv[1];
		if (!str_is_numeric(n_record))
		{
			print_str("Error\n");
			return (0);
		}
	}

	if (argc == 3)
	{
		n_record = argv[1];
		entry_value = argv[2];

		if (!str_is_numeric(n_record) || !entry_is_valid(entry_value))
		{
			print_str("Error\n");
			return (0);
		}
	}
}
