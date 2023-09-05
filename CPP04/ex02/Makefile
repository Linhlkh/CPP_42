# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: le <le@student.42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 14:19:45 by le                #+#    #+#              #
#    Updated: 2023/09/05 16:15:31 by le               ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -MMD -std=c++98
INCLUDES	=	-I $(HEADER)

SRC_PATH	=	sources/
HEADER		=	includes/
OBJ_PATH	=	objs/

SOURCES		=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				Brain.cpp \

SRCS		=	$(addprefix $(SRC_PATH),$(SOURCES))
OBJS		=	$(addprefix $(OBJ_PATH),$(SOURCES:.cpp=.o))
DEPS		=	$(addprefix $(OBJ_PATH),$(SOURCES:.cpp=.d))	


all: tmp $(NAME)


tmp:
		@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
		$(CC) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ_PATH)
			
fclean: clean
		@$(RM) $(NAME)

re: fclean all

RM			=	rm -rf

-include $(DEPS)

.PHONY: all clean fclean re 