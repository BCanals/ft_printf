/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 23:37:11 by bizcru            #+#    #+#             */
/*   Updated: 2024/10/13 16:37:50 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int	ft_printf(const char *format, ...);
int	ft_printf_char(va_list *args);
int	ft_printf_dec(va_list *args);
int	ft_printf_unsigned(va_list *args);
int	ft_printf_hex(va_list *args, char type);
int	ft_printf_ptr(va_list *args);

#endif
