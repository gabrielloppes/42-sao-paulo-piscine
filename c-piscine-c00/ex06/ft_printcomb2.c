/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printcomb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggustavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 15:24:19 by ggustavo          #+#    #+#             */
/*   Updated: 2019/12/03 14:05:52 by ggustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_primeiro;
char g_segundo;

void	ft_putchar(char numero)
{
	write(1, &numero, 1);
}

void	ft_print_comb2(void)
{
	g_primeiro = 0;
	while (g_primeiro < 100)
	{
		g_segundo = g_primeiro + 1;
		while (g_segundo < 100)
		{
			ft_putchar(g_primeiro / 10 + '0');
			ft_putchar(g_primeiro % 10 + '0');
			ft_putchar(' ');
			ft_putchar(g_segundo / 10 + '0');
			ft_putchar(g_segundo % 10 + '0');
			if ((g_primeiro != 98))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			else
			{
				ft_putchar('\n');
			}
			g_segundo++;
		}
		g_primeiro++;
	}
}
