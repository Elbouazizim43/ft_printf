/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohel-bo <mohel-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 01:22:08 by mohel-bo          #+#    #+#             */
/*   Updated: 2024/12/01 19:31:25 by mohel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lo(unsigned int n)
{
	int		i;
	char	*hex;
	char	buffer[16];
	int		count;

	hex = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		return (write (1, "0", 1));
	}
	while (n > 0)
	{
		buffer[i] = hex[n % 16];
		n /= 16;
		i++;
	}
	count = i;
	while (i > 0)
	{
		write (1, &buffer[--i], 1);
	}
	return (count);
}
