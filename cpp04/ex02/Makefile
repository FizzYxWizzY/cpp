# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 11:22:46 by mflury            #+#    #+#              #
#    Updated: 2024/05/18 00:56:40 by mflury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= Animal

SRCS 		:=	main.cpp \
				AAnimal.cpp \
				Cat.cpp \
				Dog.cpp \
				Brain.cpp \
			

OBJS		:= $(SRCS:.cpp=.o)

CC 			:= c++
CFLAGS		:= -Wall -Wextra -Werror -g -std=c++98
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