# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khle <khle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/13 04:13:32 by khle              #+#    #+#              #
#    Updated: 2023/09/05 17:39:25 by khle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)
	
$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


































# CC			= c++
# FLAGS		= -Wall -Wextra -Werror -std=c++98
# NAME		= megaphone
# OBJ_PATH	=	objs/
# SRC_PATH	=	srcs/
# SOURCES		=	megaphone.cpp

# SRCS		=	$(addprefix $(SRC_PATH),$(SOURCES))
# OBJS		=	$(addprefix $(OBJ_PATH),$(SOURCES:.cpp=.o))


# all: tmp $(NAME)

# tmp:
# 	@mkdir -p $(OBJ_PATH)

# $(NAME): $(OBJS)
# 		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

# $(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
# 		$(CC) $(FLAGS) -c $< -o $@

# clean:
# 		$(RM) $(OBJ_PATH)
	
# fclean: clean
# 		$(RM) $(NAME)

# re: fclean all

# RM			=	rm -rf

# .PHONY:	all clean fclean re 
