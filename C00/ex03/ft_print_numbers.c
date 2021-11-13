/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:02:14 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/05 18:18:32 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	first;

	first = '0';
	while (first <= '9')
	{
		write (1, &first, 1);
		first++;
	}
}
