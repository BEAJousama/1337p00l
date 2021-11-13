/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:55:52 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/09 07:12:34 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			check = 0;
			break ;
		}
		i++;
	}
	return (check);
}
