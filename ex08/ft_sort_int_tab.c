/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:45:05 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/26 20:02:09 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int aux;
	int aux2;
	int aux3;

	aux = 0;
	while (aux < size)
	{
		aux2 = 0;
		while (aux2 < size)
		{
			if (tab[aux2] > tab[aux])
			{
				aux3 = tab[aux];
				tab[aux] = tab[aux2];
				tab[aux2] = aux3;
				aux2++;
			}
			aux2++;
		}
		aux++;
	}
}
