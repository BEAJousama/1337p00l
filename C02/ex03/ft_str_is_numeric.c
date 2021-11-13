/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:28:43 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/08 10:40:54 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			check = 0;
			break ;
		}
		i++;
	}
	return (check);
}
