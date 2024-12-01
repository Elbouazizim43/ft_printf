/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohel-bo <mohel-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:58:10 by mohel-bo          #+#    #+#             */
/*   Updated: 2024/12/02 00:15:05 by mohel-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar( char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_uns(unsigned int nb);
int	ft_ptr(unsigned long n);
int	ft_hexa_up(unsigned int n);
int	ft_hexa_lo(unsigned int n);

#endif
