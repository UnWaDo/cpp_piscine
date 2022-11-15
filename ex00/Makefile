SOURCES			= megaphone.cpp
OBJECTS			= $(SOURCES:.cpp=.o)
NAME			= megaphone
CPPC			= c++
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98
.PHONY:			= all clean fclean re

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
