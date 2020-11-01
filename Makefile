# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: joppe <joppe@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/23 17:53:14 by joppe         #+#    #+#                  #
#    Updated: 2020/11/01 15:37:13 by jkoers        ########   odam.nl          #
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
SOURCES			= $(shell find '$(SRCDIR)/' -type f -name '*.$(SRCEXT)' -a $\
-not -name '$(BONUSFILES).$(SRCEXT)' -a -not -name '$(MOREBONUS).$(SRCEXT)')
BONUSSOURCES	= $(shell find '$(SRCDIR)/' -type f -name $\
'$(BONUSFILES).$(SRCEXT)' -o -name '$(MOREBONUS).$(SRCEXT)')
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
