/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap copy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 13:45:30 by rcappend      #+#    #+#                 */
/*   Updated: 2020/09/28 11:18:20 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_library.h"

void	ft_swap(int *a, int *b)
{
	int placeholder;

	placeholder = *a;
	*a = *b;
	*b = placeholder;
}
