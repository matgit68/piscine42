/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:29:33 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/19 11:13:36 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libc.h>

int		is_in(char c, char *str);
int		base_ok(char *b);
int		value_in_base(char c, char *base);
char	*trim(char *str, int *signe);

int	ft_atoi_base(char *str, char *base)
{
	int	signe;
	int	taille_b;
	int	nb;
	int	j;

	nb = 0;
	signe = 1;
	taille_b = base_ok(base);
	str = trim(str, &signe);
	j = 0;
	while (value_in_base(str[j], base) != -1)
	{
		nb = nb * taille_b + value_in_base(str[j], base);
		j++;
	}
	return (signe * nb);
}

char	*div_bybase(long int n, char *base, int taille_base, int signe)
{
	int		quotient;
	int		size;
	char	*ch;

	size = 1;
	quotient = n / taille_base;
	while (quotient > 0)
	{
		size++;
		quotient /= taille_base;
	}
	size += signe + 1;
	ch = (char *) malloc(size);
	ch[size - 1] = '\0';
	size--;
	while (size)
	{
		ch[size - 1] = base[n % taille_base];
		n /= taille_base;
		size--;
	}
	if (signe )
		ch[0] = '-';
	return (ch);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		taille_base;
	long	n;
	int		signe;

	n = nbr;
	signe = 0;
	taille_base = base_ok(base);
	if (n < 0)
	{
		signe = 1;
		n = -n;
	}
	return (div_bybase(n, base, taille_base, signe));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb10;
	char	*ch;

	if (!base_ok(base_from) || !base_ok(base_to))
		return (NULL);
	nb10 = ft_atoi_base(nbr, base_from);
	ch = ft_putnbr_base(nb10, base_to);
	return (ch);
}

int	main(int argc, char **argv)
{
	char	*str;

	(void) argc;
	str = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", str);
	free(str);
	return (0);
}
