# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: joppe <joppe@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/23 17:53:14 by joppe         #+#    #+#                  #
#    Updated: 2020/10/27 14:55:47 by jkoers        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME      	:= libft

CC          := gcc
CFLAGS      := -Wall -Wextra -Werror

SRCEXT      := c
SRCDIR      := .
HEADERDIR	:= .
OBJEXT      := o
BUILDDIR    := obj

SOURCES     := $(shell find '$(SRCDIR)/' -type f -name '*.$(SRCEXT)')
OBJECTS     := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,\
			   $(SOURCES:.$(SRCEXT)=.$(OBJEXT)))

all: $(NAME).a

$(NAME).a: $(BUILDDIR)/ $(OBJECTS)
	ar -cq $(NAME).a $(BUILDDIR)/*.$(OBJEXT)

clean:
	/bin/rm -rf $(BUILDDIR)/

fclean: clean
	/bin/rm -f $(NAME).a

re: fclean all

$(BUILDDIR)/:
	mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	$(CC) $(CFLAGS) -I$(HEADERDIR) -c $< -o $@

.PHONY: all clean fclean re

so $(NAME).so: $(BUILDDIR)/ $(OBJECTS)
	$(CC) -shared $(BUILDDIR)/*.$(OBJEXT) -o $(NAME).so
