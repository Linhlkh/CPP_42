# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khle <khle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 06:09:30 by khle              #+#    #+#              #
#    Updated: 2023/09/06 17:07:50 by khle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -MMD -std=c++98
INCLUDES	=	-I $(HEADER)

SRC_PATH	=	sources/
HEADER		=	includes/
OBJ_PATH	=	objs/

SOURCES		=	main.cpp \
				PhoneBook.cpp \
				Contact.cpp \

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
		@$(RM) $(OBJ_PATH)
			
fclean: clean
		@$(RM) $(NAME)

re: fclean all

RM			=	rm -rf

-include $(DEPS)

.PHONY: all clean fclean re 
