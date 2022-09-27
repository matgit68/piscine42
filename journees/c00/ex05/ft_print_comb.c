/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <mdjemaa@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:17:26 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/02 10:03:03 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	chaine[3];

	chaine[0] = '0';
	while (chaine[0] <= '7')
	{
		chaine[1] = chaine[0] + 1;
		while (chaine[1] <= '8')
		{
			chaine[2] = chaine[1] + 1;
			while (chaine[2] <= '9')
			{
				write(1, &chaine, 3);
				if (!(chaine[0] >= '7' && chaine[1] >= '8' && chaine[2] >= '9'))
				{
					write(1, ", ", 2);
				}
				chaine[2]++;
			}
			chaine[1]++;
		}
		chaine[0]++;
	}
}
