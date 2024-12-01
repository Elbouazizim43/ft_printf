/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohel-bo <mohel-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 01:03:58 by mohel-bo          #+#    #+#             */
/*   Updated: 2024/11/29 02:20:34 by mohel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uns(unsigned int nb)
{
	int		i;
	char	*decimal;
	char	buffer[20];
	int		count;

	decimal = "0123456789";
	count = 0;
	i = 0;
	if (nb == 0)
		return ((write(1, "0", 1)));
	while (nb > 0)
	{
		buffer[i] = decimal[nb % 10];
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		write (1, &buffer[--i], 1);
		count ++;
	}
	return (count);
}
