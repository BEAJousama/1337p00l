/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:27:06 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/10 11:27:59 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	toHex(unsigned char c)
{
	int		c1;
	int		c2;
	char	*base;

	base = "0123456789abcdef";
	c1 = base[c / 16];
	c2 = base[c % 16];
	write (1, "\\", 1);
	write (1, &c1, 1);
	write (1, &c2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 127 && str[i] > 31))
		{
			write (1, &str[i], 1);
		}
		else
		{
			toHex((unsigned char)str[i]);
		}	
		i++;
	}
}
