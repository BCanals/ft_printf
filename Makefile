# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bizcru <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/28 15:47:58 by bizcru            #+#    #+#              #
#    Updated: 2024/10/10 20:37:49 by bizcru           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_PATH = libft

LIBFT_NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c\

BONUS_SRCS = ft_lstnew_bonus.c \

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) ft_printf.h Makefile 
	$(MAKE) -C libft
	cp $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
	ar -rcs $@ $(OBJS)
	ranlib $@ 

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJS)

bclean:
	rm -f $(BONUS_OBJS)

fclean: clean bclean
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

