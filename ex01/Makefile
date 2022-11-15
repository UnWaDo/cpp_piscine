SOURCES			= main.cpp PhoneBook.cpp Contact.cpp
HEADERS			= PhoneBook.hpp Contact.hpp
OBJECTS			= $(SOURCES:.cpp=.o)
NAME			= phonebook
CPPC			= c++
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98
.PHONY:			all clean fclean re

all:			$(NAME)

$(NAME):		$(OBJECTS)
	$(CPPC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean:			clean
	rm -rf $(NAME)

%.o:			%.cpp
	$(CPPC) $(CPPFLAGS) -o $@ -c $<

re:				fclean $(NAME)
