/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:38:49 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/18 17:42:24 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_in(char c, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	base_ok(char *b)
{
	int	i;
	int	j;
	int	taille;

	taille = 0;
	i = 0;
	while (b[i])
	{
		if (is_in(b[i], " \t\n\r\v\f+-"))
			return (0);
		j = i + 1;
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
		taille++;
	}
	if (taille > 1)
		return (taille);
	else
		return (0);
}

int	value_in_base(char c, char *base)
{
	int	i;
	int	res;

	i = 0;
	res = -1;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (res);
}

char	*trim(char *str, int *signe)
{
	while (*str == '\v' || *str == '\f' || *str == '\t' || \
			*str == ' ' || *str == '\n' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*signe = -(*signe);
		str++;
	}
	return (str);
}
