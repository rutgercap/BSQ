/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 19:11:22 by rcappend      #+#    #+#                 */
/*   Updated: 2020/09/16 19:11:39 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int number)
{
	char c;

	c = number + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb <= 9)
		{
			ft_putchar(nb);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10);
		}
	}
}
