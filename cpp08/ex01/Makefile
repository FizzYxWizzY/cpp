# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 04:36:31 by mflury            #+#    #+#              #
#    Updated: 2024/11/29 03:55:01 by mflury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= span

SRCS 		:=	Span.cpp \
				main.cpp \

				

OBJS		:= $(SRCS:.cpp=.o)

CC 			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98
RM			:= rm -f
MAKEFLAGS   += --no-print-directory

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	$(info CREATING $(NAME))

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	$(info CREATING $@)

clean :
	$(RM) $(OBJS)
	$(info DELETING objects files)

fclean : clean
	$(RM) $(NAME)
	$(info DELETING $(NAME))

re :
	$(MAKE) fclean
	$(MAKE) all

info-%:
	$(MAKE) --dry-run --always-make $* | grep -v "info"

.PHONY : clean fclean re info-