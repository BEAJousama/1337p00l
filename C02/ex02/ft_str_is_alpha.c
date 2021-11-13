/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:25:54 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/08 10:41:12 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (str[i])
	{
		if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 'z' || str[i] < 'A')
		{
			check = 0;
			break ;
		}
		i++;
	}
	return (check);
}
