/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:07:29 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/21 13:32:00 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	j;
	int	*tab;

	i = min;
	j = 0;
	len = max - min;
	if (max > min)
	{
		tab = (int *)malloc((len + 1) * sizeof(int));
		if (tab)
		{
			while (i <= max && j < len)
			{
				*(tab + j) = i;
				i++;
				j++;
			}
		}
	}
	else
		tab = NULL;
	return (tab);
}
