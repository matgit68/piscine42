/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdjemaa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:34:35 by mdjemaa           #+#    #+#             */
/*   Updated: 2022/09/03 18:57:40 by mdjemaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	plus_petit;
	int	j;
	int	temp;

	index = 0;
	while (index < size - 1)
	{
		plus_petit = index;
		j = index + 1;
		while (j < size)
		{
			if (tab[j] < tab[plus_petit])
			{
				plus_petit = j;
			}
			j++;
		}
		temp = tab[index];
		tab[index] = tab[plus_petit];
		tab[plus_petit] = temp;
		index++;
	}
}
