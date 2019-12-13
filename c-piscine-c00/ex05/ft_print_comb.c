/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggustavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:23:56 by ggustavo          #+#    #+#             */
/*   Updated: 2019/12/03 14:05:25 by ggustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_centena;
int g_dezena;
int g_unidade;

void ft_print_comb(void);

void	ft_print_comb(void)
{
	g_centena = 48;
	while (g_centena <= 57)
	{
		g_dezena = g_centena + 1;
		while (g_dezena <= 57)
		{
			g_unidade = g_dezena + 1;
			while (g_unidade <= 57)
			{
				write(1, &g_centena, 1);
				write(1, &g_dezena, 1);
				write(1, &g_unidade, 1);
				g_unidade++;
				if (g_centena != '7')
				{
					write(1, ", ", 2);
				}
			}
			g_dezena++;
		}
		g_centena++;
	}
}
