# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdelmo <aabdelmo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 11:31:31 by aabdelmo          #+#    #+#              #
#    Updated: 2021/12/21 11:46:49 by aabdelmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

INCLUDES = ft_printf.h

SRCS = ft_putchar.c\
       ft_putstr.c\
	   ft_putnbr.c\
	   ft_putnbr_un.c\
	   ft_print_hexa.c\
	   ft_printf.c\
	   ft_print_point.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(INCLUDES)
	gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME) $(OBJS)

re: fclean all