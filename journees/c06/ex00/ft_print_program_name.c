/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:23:19 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/13 15:16:44 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*nom;

	(void) argc;
	nom = argv[0];
	while (*nom)
	{	
		write(1, nom, 1);
		nom++;
	}
	write(1, "\n", 1);
	return (0);
}
