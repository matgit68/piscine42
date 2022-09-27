/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:14:34 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/19 12:15:06 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include <libc.h>

int	is_in(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	*put_word(int deb, int fin, char *str)
{
	char	*word;
	int		size;
	int		j;

	j = 0;
	size = fin - deb;
	word = malloc(size + 1);
	if (!word)
		return (NULL);
	while (deb + j < fin)
	{
		word[j] = str[deb + j];
		j++;
	}
	word[j] = 0;
	return (word);
}

int	how_many_words(char *str, char *sep)
{
	int	i;
	int	words;
	int	lettre;

	words = 0;
	i = 0;
	lettre = 0;
	while (str[i])
	{
		if (is_in(str[i], sep))
			lettre = 0;
		else
		{
			if (!lettre)
				words++;
			lettre = 1;
		}
		i++;
	}
	return (words);
}

void	fill_word_arr(char **w_a, char *str, char *sep)
{
	int	i;
	int	ideb;
	int	iword;

	i = 1;
	iword = 0;
	if (!is_in(str[i], sep))
		ideb = 0;
	while (str[i])
	{
		if (!is_in(str[i], sep) && is_in(str[i - 1], sep))
			ideb = i;
		if (is_in(str[i], sep) && !is_in(str[i - 1], sep))
		{
			w_a[iword] = put_word(ideb, i, str);
			iword++;
		}
		if (!is_in(str[i], sep) && !str[i + 1])
		{
			w_a[iword] = put_word(ideb, i + 1, str);
			iword++;
		}
		i++;
	}
}

char	**ft_split(char *str, char *sep)
{
	int		words_number;
	char	**tab;

	words_number = how_many_words(str, sep);
	tab = malloc(words_number * sizeof (tab) + 1);
	if (!tab)
		return (NULL);
	fill_word_arr(tab, str, sep);
	return (tab);
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	(void) argc;
	i = 0;
	tab = ft_split(argv[1], argv[2]);
	while (tab[i])
	{
		puts(tab[i]);
		i++;
	}
	return (0);
}
