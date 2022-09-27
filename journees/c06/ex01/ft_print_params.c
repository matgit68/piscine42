/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:40:18 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/08 22:47:41 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arg(char *arg)
{
	while (*arg)
	{
		write(1, arg, 1);
		arg++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		print_arg(argv[i]);
		i++;
	}
	return (0);
}
