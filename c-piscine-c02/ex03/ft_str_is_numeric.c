/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggustavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:45:30 by ggustavo          #+#    #+#             */
/*   Updated: 2019/12/12 17:53:45 by ggustavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] > '0' && str[index] < '9'))
			return (0);
		index++;
	}
	return (1);
}
