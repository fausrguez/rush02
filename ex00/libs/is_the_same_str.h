/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_the_same_str.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/30 21:23:32 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/30 21:23:36 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef IS_THE_SAME_STR
#define IS_THE_SAME_STR
int	is_the_same_str(char *s1, char *s2)
{
	unsigned int c;

	c = 0;
	while (s1[c] == s2[c])
	{
		if (s1[c] == '\0')
		{
			return (1);
		}
		c++;
	}
	return (0);
}
#endif
