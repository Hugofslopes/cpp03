# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 14:55:18 by hfilipe-          #+#    #+#              #
#    Updated: 2025/05/21 17:44:52 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -ggdb
STD98 = -std=c++98
SHADOWV = -Wshadow
CXX = c++
INCLUDES = -I includes
SRC_DIR = src
OBJ_DIR = obj
SRC = main.cpp ClapTrap.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
NAME = Diamond
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(STD98) $(SHADOWV) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(FLAGS) $(STD98) $(SHADOWV) $(INCLUDES) -MMD -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all