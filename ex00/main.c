/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: saamian <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 18:12:25 by saamian       #+#    #+#                 */
/*   Updated: 2020/08/30 21:21:32 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libs/variables.h"
#include "libs/str_is_numeric.h"
#include "libs/entry_is_valid.h"
#include "libs/print_str.h"
#include "libs/get_dict.h"
#include "libs/open_record.h"

int main(int argc, char **argv)
{
	char *n_record;
	char *entry_value;
	int record;

	if (argc < 2 || argc > 3)
	{
		print_str("Error\n");
		return (0);
	}
	record = 0;
	char ***dictionary = (char ***)malloc(sizeof(char **) * 60);
	while (record < 50)
	{
		dictionary[record] = (char **)malloc(sizeof(char *) * 2);
		dictionary[record][0] = (char *)malloc(sizeof(char) * 48);
		dictionary[record][1] = (char *)malloc(sizeof(char) * 48);
		record++;
	}
	get_dict(MAIN_DICTIONARY, dictionary);

	if (argc == 2)
	{
		n_record = argv[1];
		if (!str_is_numeric(n_record))
		{
			print_str("Error\n");
			return (0);
		}
		open_record(dictionary, n_record);
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
	free(dictionary);
}
