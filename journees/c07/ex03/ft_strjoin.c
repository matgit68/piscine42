/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:46:22 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/19 17:11:42 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libc.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	t_s(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (i - 1) * ft_strlen(sep) + 1;
	printf("taille mc : %d\n", total_len);
	return (total_len);
}

void	ft_cpy_sep(char *megachaine, char **strs, char *sep, int size)
{
	int		i;
	char	*navsep;

	i = 0;
	while (i < size)
	{
		while (*strs[i])
		{
			*megachaine = *strs[i];
			megachaine++;
			strs[i]++;
		}
		navsep = sep;
		while (i < size - 1 && *navsep)
		{
			*megachaine = *navsep;
			megachaine++;
			navsep++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*megachaine;
	char	*startmega;

	if (size == 0)
	{
		megachaine = malloc(1);
		megachaine[0] = '\0';
		return (megachaine);
	}
	megachaine = malloc(t_s(size, strs, sep));
	if (!megachaine)
		return (NULL);
	startmega = megachaine;
	ft_cpy_sep(megachaine, strs, sep, size);
	return (startmega);
}

int	main(int argc, char **argv)
{
	char	*sep;
	char	*mc;

	sep = "_";
	mc = ft_strjoin(argc - 1, argv + 1, sep);
	puts(mc);
	free(mc);
	return (0);
}
