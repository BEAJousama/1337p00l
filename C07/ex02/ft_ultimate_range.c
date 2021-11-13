/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:24:02 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/18 09:49:17 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*t;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	t = (int *)malloc((len + 1) * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (t != NULL)
	{
		while (min < max)
		{
			t[i] = min;
			min++;
			i++;
		}
		*range = t;
		return (i);
	}
	else
		return (-1);
}
