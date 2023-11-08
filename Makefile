# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvillalt <nvillalt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 09:44:50 by nvillalt          #+#    #+#              #
#    Updated: 2023/11/08 19:35:57 by nvillalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

SRCS = ft_printf.c \
	libft_ft_strchr.c \
	print_character.c \
	print_hexadecimal.c \
	print_pointer.c \
	print_integer.c \
	print_string.c \
	print_unsigned.c

OBJS = $(SRCS:%.c=%.o)

RM = rm -f

.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME) $(OBJS)

re: fclean all