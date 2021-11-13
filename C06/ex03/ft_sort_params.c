/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:11:56 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/18 10:34:38 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_rev_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < ac)
	{
		j = i;
		while (j > 1 && ft_strcmp(av[j], av[j - 1]) <= 0)
		{
			tmp = av[j - 1];
			av[j - 1] = av[j];
			av[j] = tmp;
			j--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	ft_rev_params(ac, av);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
