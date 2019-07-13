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

NAME     := antiutopian_phone_book_term_4543524

SRCS     := main.cpp ArContactRecord.cpp ArchivePBook.cpp
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
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re:     fclean all

.PHONY: all clean fclean format re