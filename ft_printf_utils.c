/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:12:36 by bizcru            #+#    #+#             */
/*   Updated: 2024/10/13 04:52:23 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(va_list *args)
{
	char	c;

	c = (char) va_arg(*args, int);
	ft_putchar_fd(c, 2);
	return (1);
}

int ft_printf_dec(va_list *args)
{
	int i;
	char *dec;

	i = va_arg(*args, int);
	dec = ft_itoa(i);
	ft_putstr_fd(dec, 2);
	return (ft_strlen(dec));
}

int	ft_printf_unsigned(va_list *args)
{
	int		i;
	char	*dec;

	i = va_arg(*args, unsigned int);
	dec = ft_itoa_u(i);
	ft_putstr_fd(dec, 2);
	return (ft_strlen(dec));
}

int	ft_printf_hex(va_list *args, char type)
{
	unsigned int	i;
	int				rtrn;
	char			*base;

	i = va_arg(*args, unsigned int);
	if (type == 'x' )
		base = ft_strdup("0123456789abcdef");
	else if (type == 'X')
		base = ft_strdup("0123456789ABCDEF");
	 rtrn = ft_putnbr_base_u(i, base);
	 free(base);
	 base = NULL;
	 return (rtrn);
}

int	ft_printf_ptr(va_list *args)
{
	unsigned long	ptr;
	int				rtrn;
	char			*base;

	ft_putstr_fd("0x", 2);
	rtrn = 2;
	ptr = (unsigned long) va_arg(*args, void *);
	base = ft_strdup("0123456789abcdef");
	rtrn += ft_putnbr_base_u(ptr, base);
	free(base);
	return (rtrn);
}
