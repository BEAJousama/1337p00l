/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:50:59 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/15 15:45:31 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	is_valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-' || str[i] < 32 || str[i] > 126)
			return (0);
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		t[1000];
	int		j;
	long	nb;

	nb = nbr;
	j = 0;
	size = ft_strlen(base);
	if (is_valid_base(base))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		while (nb)
		{
			t[j] = nb % size;
			nb = nb / size;
			j++;
		}
		while (--j >= 0)
			ft_putchar(base[t[j]]);
	}
}
