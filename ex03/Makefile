# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/09 12:04:14 by emimenza          #+#    #+#              #
#    Updated: 2024/07/11 16:05:21 by emimenza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf
NAME = ex03

SRCS = srcs/Intern.cpp\
	   srcs/PresidentialPardonForm.cpp\
	   srcs/RobotomyRequestForm.cpp\
	   srcs/ShrubberyCreationForm.cpp\
	   srcs/Bureaucrat.cpp\
	   srcs/AForm.cpp\
	   main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run