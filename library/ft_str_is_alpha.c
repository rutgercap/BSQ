/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/19 19:24:20 by rcappend      #+#    #+#                 */
/*   Updated: 2020/09/28 11:16:32 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
