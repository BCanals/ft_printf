/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:26:08 by bizcru            #+#    #+#             */
/*   Updated: 2024/10/11 20:26:58 by bcanals-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_arg(char type, va_start *args)
{
	/*
		if
			print this way
		if
			print that way
		if
			print the other way
		if
			print same
	*/
}


int	ft_printf(const char *format, ...)
{
	va_list args;
	int		i;
	int		rtrn;

	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
			//ft_manage arg - checks the type & update va_arg and prints
		i++;
	}
	printf("Hi there, it's ft_check()\n");
	va_end(args);
}
