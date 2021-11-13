/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 07:55:41 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/19 13:06:19 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	i;

	i = 1;
	pow = nb;
	if (power < 0)
		return (0);
	if ((!power && !nb) || !power)
		return (1);
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}
