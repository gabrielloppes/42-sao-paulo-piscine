/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggustavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:24:11 by ggustavo          #+#    #+#             */
/*   Updated: 2019/12/07 19:25:58 by ggustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int tamanho)
{
	int index;
	int rindex;
	int troca;

	index = 0;
	rindex = tamanho - 1;
	while (index < (tamanho / 2))
	{
		troca = tab[index];
		tab[index] = tab[rindex];
		tab[rindex] = troca;
		index++;
		rindex--;
	}
}
