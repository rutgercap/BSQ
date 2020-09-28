/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 19:25:35 by rcappend      #+#    #+#                 */
/*   Updated: 2020/09/28 11:17:47 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

int	ft_str_is_numeric(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < '0' || str[counter] > '9')
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
