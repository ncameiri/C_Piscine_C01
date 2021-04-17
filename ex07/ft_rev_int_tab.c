/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:43:44 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/26 19:53:52 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int auxrev;
	int auxtab[size];

	auxrev = size - 1;
	aux = 0;
	while (aux < size)
	{
		auxtab[auxrev] = tab[aux];
		aux++;
		auxrev--;
	}
	aux = 0;
	while (aux < size)
	{
		tab[aux] = auxtab[aux];
		aux++;
	}
}
