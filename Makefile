# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bizcru <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 15:47:58 by bizcru            #+#    #+#              #
#    Updated: 2024/10/13 04:57:46 by bizcru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = libft

LIBFT_NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) ft_printf.h Makefile 
	$(MAKE) -C libft
	cp $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
	ar -rcs $@ $(OBJS)
	ranlib $@ 

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f libftprintf.a

re: fclean all

#################################
# TO BE DELETED BEFORE REVISION #
#################################

TEST = main.c

TESTNAME = main

TESTO = $(TEST:.c=.o)

test: $(TESTO) $(NAME)
	gcc $(CFLAGS) -c $(TEST)
	gcc $(TESTO) -o $(TESTNAME) libftprintf.a

tclean:
	rm -f $(TESTO)
	rm -f $(TESTNAME)

retest: fclean tclean test

