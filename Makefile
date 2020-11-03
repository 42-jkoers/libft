# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: joppe <joppe@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/23 17:53:14 by joppe         #+#    #+#                  #
#    Updated: 2020/11/03 01:10:47 by jkoers        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME      		= libft
CC          	= gcc
CFLAGS      	= -Wall -Wextra -Werror
SRCEXT      	= c
SRCDIR      	= .
HEADERDIR		= .
OBJEXT      	= o
BUILDDIR    	= obj
BONUSFILES		= ft_lst*
MOREBONUS		= *_bonus
SOURCES =$\
ft_atoi.c$\
ft_bzero.c$\
ft_calloc.c$\
ft_isalnum.c$\
ft_isalpha.c$\
ft_isascii.c$\
ft_isdigit.c$\
ft_isprint.c$\
ft_itoa.c$\
ft_memccpy.c$\
ft_memchr.c$\
ft_memcmp.c$\
ft_memcpy.c$\
ft_memmove.c$\
ft_memset.c$\
ft_putchar_fd.c$\
ft_putendl_fd.c$\
ft_putnbr_fd.c$\
ft_putstr_fd.c$\
ft_split.c$\
ft_strchr.c$\
ft_strcmp.c$\
ft_strdup.c$\
ft_strjoin.c$\
ft_strlcat.c$\
ft_strlcpy.c$\
ft_strlen.c$\
ft_strmapi.c$\
ft_strncmp.c$\
ft_strnstr.c$\
ft_strrchr.c$\
ft_strtrim.c$\
ft_substr.c$\
ft_tolower.c$\
ft_toupper.c$\
BONUSSOURCES =$\
ft_lstadd_back.c$\
ft_lstadd_front.c$\
ft_lstclear.c$\
ft_lstdelone.c$\
ft_lstiter.c$\
ft_lstlast.c$\
ft_lstmap.c$\
ft_lstnew.c$\
ft_lstsize.c$\
OBJECTS   		= $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$\
$(SOURCES:.$(SRCEXT)=.$(OBJEXT)))
BONUSOBJECTS	= $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$\
$(BONUSSOURCES:.$(SRCEXT)=.$(OBJEXT)))

all: $(NAME).a

$(NAME): $(NAME).a

$(NAME).a: $(BUILDDIR)/ $(OBJECTS)
	ar -cr $(NAME).a $(BUILDDIR)/*.$(OBJEXT)

bonus: $(BUILDDIR)/ $(OBJECTS) $(BONUSOBJECTS)
	ar -cr $(NAME).a $(OBJECTS) $(BONUSOBJECTS)

clean:
	/bin/rm -rf $(BUILDDIR)/

fclean: clean
	/bin/rm -f $(NAME).a
	/bin/rm -f $(NAME).so

re: fclean all

$(BUILDDIR)/:
	mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	$(CC) $(CFLAGS) -I$(HEADERDIR) -c $< -o $@

so: $(BUILDDIR)/ $(OBJECTS)
	$(CC) -shared $(BUILDDIR)/*.$(OBJEXT) -o $(NAME).so

.PHONY: all clean fclean re so bonus
