/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:50:39 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/15 15:44:43 by obeaj            ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n'
		   	 || str[j] == '\r' || str[j] == '\v' || str[j] == '\f')
		j++;
	while (str[j] == '+' || str[j] == '-')
		j++;
	while (str[len])
		len++;
	return (len - j);
}

int	ft_pow(int a, int b)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (i < b)
	{
		r *= a;
		i++;
	}
	return (r);
}

int	ft_getIndex(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	result;
	int	s_len;

	s_len = ft_strlen(str) - 1;
	result = 0;
	s = 1;
	i = 0;
	if (!is_valid_base(base))
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i])
	{
		result += ft_getIndex(str[i], base) * ft_pow(ft_strlen(base), s_len);
		i++;
		s_len--;
	}
	return (result * s);
}
