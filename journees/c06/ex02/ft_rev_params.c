/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:48:12 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/08 22:55:32 by mdjemaa          ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		print_arg(argv[i]);
		i--;
	}
	return (0);
}
