NAME = phonebook

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = phonebook.cpp contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all