/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggustavo <ggustavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 12:53:13 by ggustavo          #+#    #+#             */
/*   Updated: 2019/12/07 19:25:19 by ggustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int ponteiro_a;

	ponteiro_a = *a;
	*a = ponteiro_a / *b;
	*b = ponteiro_a % *b;
}
