# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbrathie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/05 17:09:43 by rbrathie          #+#    #+#              #
#    Updated: 2013/12/05 17:09:48 by rbrathie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game_2048

SRCS =	main.c ft_auxi.c ft_auxi_01.c ft_auxi_02.c ft_auxi_03.c\
	ft_error.c\
	ft_check.c\
	ft_move.c ft_move_01.c\
	ft_score.c ft_score_01.c\
	ft_display.c ft_keypad.c\
	ft_draw.c\
	ft_game.c ft_game_01.c

SRCO = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	gcc -Wall -Werror -Wextra -I libft/ -c $(SRCS)
	gcc -o $(NAME) $(SRCO) -L libft/ -lft -lncurses

clean:
	make -C libft/ clean
	rm -rf $(SRCO)

fclean: clean
	make -C libft/ fclean
	rm -rf $(NAME)

re: fclean all
