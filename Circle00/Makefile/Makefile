# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 12:15:15 by minsuki2          #+#    #+#              #
#    Updated: 2021/11/23 19:25:23 by minsuki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = diary_exe
AR = ar rcs
RM = rm -f
INC = -I.
FILES = memo \
		calendar \
		main
CURRENT_DIR = ./
.SUFFIXES : .c .o

OBJECTS = $(addprefix $(CURRENT_DIR), $(addsuffix .o, $(FILES)))
SOURES = $(addprefix $(CURRENT_DIR), $(addsuffix .c, $(FILES)))
$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(INC) $^ -o $@

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re all
