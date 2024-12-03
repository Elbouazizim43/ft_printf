/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohel-bo <mohel-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:58:05 by mohel-bo          #+#    #+#             */
/*   Updated: 2024/12/03 20:21:56 by mohel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list valist, const char *str)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar(va_arg (valist, int));
	else if (*str == 's')
		count += ft_putstr(va_arg(valist, char *));
	else if (*str == 'p')
		count += ft_ptr (va_arg(valist, unsigned long));
	else if (*str == 'd' || *str == 'i')
		count += ft_putnbr (va_arg(valist, int));
	else if (*str == 'u')
		count += ft_uns (va_arg(valist, unsigned int));
	else if (*str == 'x')
		count += ft_hexa_lo (va_arg(valist, unsigned int));
	else if (*str == 'X')
		count += ft_hexa_up (va_arg(valist, unsigned int));
	else if (*str == '%')
		count += ft_putchar (*str);
	else
		count += ft_putchar (*str);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list		valist;
	int			len;

	len = 0;
	va_start(valist, str);
	if (write(1, 0, 0) < 0)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (va_end (valist), len);
			len += ft_format(valist, str);
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end (valist);
	return (len);
}
