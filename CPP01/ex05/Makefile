# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khle <khle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/30 21:51:31 by khle              #+#    #+#              #
#    Updated: 2023/09/05 17:53:05 by khle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex05
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -MMD -std=c++98
INCLUDES	=	-I $(HEADER)

SRC_PATH	=	sources/
HEADER		=	includes/
OBJ_PATH	=	objs/

SOURCES		=	main.cpp \
				Harl.cpp \

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