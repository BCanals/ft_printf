/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bizcru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:48:38 by bizcru            #+#    #+#             */
/*   Updated: 2024/10/13 17:15:09 by bizcru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main() //int argc, char **argv)
{
	int length;
	int ctrl_length;

	if (1)
	{
		char *s = "stupid";
		//char c = 'f';
		//int *dec = 0;
		printf("yourpf->");
		length = ft_printf("hello %s world, %d\n", s, 0);
		printf("printf->");
		ctrl_length = printf("hello %s world, %d\n", s, 0);
	}
	printf("your printf: %i\nreal printf: %i\n", length, ctrl_length);
}
