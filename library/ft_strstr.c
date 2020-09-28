/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 12:47:29 by rcappend      #+#    #+#                 */
/*   Updated: 2020/09/28 11:17:59 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_library.h"

char	*compare(char *str, char *to_find, int counter_1)
{
	int		counter_2;
	char	*result;

	result = &str[counter_1];
	counter_2 = 0;
	while (str[counter_1] == to_find[counter_2])
	{
		counter_1++;
		counter_2++;
		if (to_find[counter_2] == '\0')
		{
			return (result);
		}
	}
	result = NULL;
	return (result);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*result;
	int		counter;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	result = NULL;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == to_find[0])
		{
			result = compare(str, to_find, counter);
			if (result != NULL)
			{
				return (result);
			}
		}
		counter++;
	}
	return (result);
}
