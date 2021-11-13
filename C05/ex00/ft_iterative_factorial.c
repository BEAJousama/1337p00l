/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 07:41:54 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/19 07:47:11 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (!nb || nb == 1)
		return (1);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
