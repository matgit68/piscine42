/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:19:02 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/06 13:52:19 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	char_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_wordize(char *str)
{
	if (char_is_lowercase(*str))
		*str -= 32;
	str++;
	while (char_is_alphanumeric(*str))
	{
		if (char_is_uppercase(*str))
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*deb;

	deb = str;
	while (*str)
	{
		if (char_is_alphanumeric(*str))
			str = ft_wordize(str);
		str++;
	}
	return (deb);
}
