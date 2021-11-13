/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:49:52 by obeaj             #+#    #+#             */
/*   Updated: 2021/08/22 11:20:17 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src [j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen_tot(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len + (size - 1) * ft_strlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*t;
	int		len_tot;
	int		i;

	i = 1;
	len_tot = ft_strlen_tot(strs, sep, size);
	if (size == 0)
	{
		t = (char *)malloc(1);
		*t = 0;
		return (t);
	}
	t = (char *)malloc((len_tot + 1) * sizeof(char));
	ft_strcat (t, strs[0]);
	while (i <= size - 1)
	{
		ft_strcat(t, sep);
		ft_strcat(t, strs[i]);
		i++;
	}
	return (t);
}
