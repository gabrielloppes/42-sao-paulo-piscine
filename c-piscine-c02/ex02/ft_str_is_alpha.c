/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggustavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 20:36:30 by ggustavo          #+#    #+#             */
/*   Updated: 2019/12/11 20:43:15 by ggustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || (str[index] > 'Z' &&
			str[index] < 'a') || str[index] > 'z')
		{
			return (0);
		}
		index++;
	}
	return (1);
}
