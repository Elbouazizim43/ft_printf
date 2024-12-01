/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohel-bo <mohel-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:47:08 by mohel-bo          #+#    #+#             */
/*   Updated: 2024/12/01 23:14:40 by mohel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print(char *buffer, int i)
{
	int	count;

	count = 0;
	while (i > 0)
	{
		write (1, &buffer[--i], 1);
		count ++;
	}
	return (count);
}

int	ft_putnbr(int nb)
{
	int		i;
	char	*decimal;
	char	buffer[10];
	int		sign;

	decimal = "0123456789";
	sign = 0;
	i = 0;
	if (nb == 0)
		return (write (1, "0", 1));
	else if (nb == -2147483648)
		return (write (1, "-2147483648", 11));
	else if (nb < 0)
	{
		write (1, "-", 1);
		sign = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		buffer[i++] = decimal[nb % 10];
		nb /= 10;
	}
	return (ft_print(buffer, i) + sign);
}
