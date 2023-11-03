# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvillalt <nvillalt@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 09:44:50 by nvillalt          #+#    #+#              #
#    Updated: 2023/11/03 14:53:22 by nvillalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

SRCS = ft_printf.c \
	ft_printf_hex_ptr.c \
	ft_printf_str_num.c \
	./libft/ft_strchr.c

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