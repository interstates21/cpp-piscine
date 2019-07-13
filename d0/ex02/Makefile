#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okupin <okupin@student.unit.ua>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 16:07:42 by okupin            #+#    #+#              #
#    Updated: 2019/06/22 16:07:47 by okupin           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME     := dreamjob

SRCS     := tests.cpp Account.class.cpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := clang++
CXXFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re