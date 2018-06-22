#!/usr/bin/make -j$(getconf _NPROCESSORS_ONLN) -f
NAME = logger
SRCS = Logger.cpp Logger.hpp main.cpp
OBJS = Logger.o main.o
CXXFLAGS = -Wall -Werror -Wextra
DEBUG = -g -fno-omit-frame-pointer -fsanitize=address
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@
debug: $(NAME)
	$(CXX) $(CXXFLAGS) $(DEBUG) $(OBJS) -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:re fclean clean all
