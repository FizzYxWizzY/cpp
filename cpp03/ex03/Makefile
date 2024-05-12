# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 11:22:46 by mflury            #+#    #+#              #
#    Updated: 2024/05/12 03:13:12 by mflury           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= DiamondTrap

SRCS 		:=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				DiamondTrap.cpp \
			

OBJS		:= $(SRCS:.cpp=.o)

CC 			:= c++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -fsanitize=address,undefined
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