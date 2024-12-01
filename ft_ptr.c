/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohel-bo <mohel-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 01:25:55 by mohel-bo          #+#    #+#             */
/*   Updated: 2024/12/01 19:30:14 by mohel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long n)
{
	int		i;
	char	*hex;
	char	buffer[16];
	int		count;

	i = 0;
	hex = "0123456789abcdef";
	if (n == 0)
	{
		return (write (1, "0x0", 3));
	}
	while (n > 0)
	{
		buffer[i] = hex[n % 16];
		n /= 16;
		i++;
	}
	write (1, "0x", 2);
	count = i;
	while (i > 0)
	{
		write (1, &buffer[--i], 1);
	}
	return (count + 2);
}
