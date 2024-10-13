/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:26:08 by bizcru            #+#    #+#             */
/*   Updated: 2024/10/13 04:33:12 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_printf_string(va_list *args)
{
	char	*string;
	
	string = va_arg(*args, char *);
	ft_putstr_fd(string, 2);
	return (ft_strlen(string));
}

int	ft_print_arg(char type, va_list *args)
{
	if (type == 's')
		return (ft_printf_string(args));
	else if (type == 'c')
		return (ft_printf_char(args));
	else if (type == 'i' || type == 'd')
		return (ft_printf_dec(args));
	else if (type == 'u')
		return (ft_printf_unsigned(args));
	else if (type == 'x' || type == 'X')
		return (ft_printf_hex(args, type));
	else if (type == 'p')
		return (ft_printf_ptr(args));
	return (0);
}


int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		rtrn;

	rtrn = 0;
	va_start(args, format);
	i = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			rtrn += ft_print_arg(format[i], &args);
		}
		else
		{
			ft_putchar_fd(format[i], 2);
			rtrn++;
		}
		i++;
	}
	va_end(args);
	printf("ft_printf ends!\n");
	return rtrn;
}
