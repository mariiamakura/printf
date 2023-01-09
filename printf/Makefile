# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mishamakura <mishamakura@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 12:19:30 by mishamakura       #+#    #+#              #
#    Updated: 2023/01/09 13:17:09 by mishamakura      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printchar.c ft_printhex.c\
	ft_printint.c ft_printper.c ft_printptr.c\
	ft_printstr.c ft_printunsint.c

OBJS_DIR = obj/
OBJS = $(SRC:.c=.o)

$(OBJS_DIR)%.o : %.c printflib.h
	mkdir -p $(OBJS_DIR)
	cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS_DIR) $(OBJS)
		make -C ./libft
		cp libft/libft.a $(NAME)
		ar rcs $(NAME) $(OBJS_DIR) $(OBJS) 
		
all: $(NAME)

clean:
	make -C ./libft clean
	rm -rf $(OBJS_DIR)

fclean: clean
	make -C ./libft fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 