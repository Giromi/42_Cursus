# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:56:28 by minsuki2          #+#    #+#              #
#    Updated: 2021/11/22 21:49:03 by minsuki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
W3 = -Wall -Werror -Wextra
TARGET = diary_exe
OBJECTS = memo.o calendar.o main.o
RM = rm -f


$(TARGET) : memo.o calendar.o main.o
	$(CC) $(W3) -o $(TARGET) memo.o calendar.o main.o

memo.o : memo.c
	$(CC) $(W3) -c -o memo.o memo.c

calendar.o : calendar.c
	$(CC) $(W3) -c -o calendar.o calendar.c

main.o : main.c
	$(CC) $(W3) -c -o main.o main.c

clean :
	$(RM) *.o
	$(RM) diary_exe
