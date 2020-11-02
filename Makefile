# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: joppe <joppe@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/23 17:53:14 by jkoers        #+#    #+#                  #
#    Updated: 2020/11/01 18:54:52 by jkoers        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME      		= libft

CC          	= gcc
CFLAGS      	= -Wall -Wextra -Werror

SRCEXT      	= c
SRCDIR      	= src
HEADERDIR		= include
OBJEXT      	= o
BUILDDIR    	= obj
BINDIR			= bin

UNITTEST		= test/test_ft_numtobase.c

SOURCES     	= $(shell find '$(SRCDIR)/' -type f -name '*.$(SRCEXT)')
OBJECTS     	= $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$\
				  $(SOURCES:.$(SRCEXT)=.$(OBJEXT)))
INCLUDENAME		= $(subst lib,,$(NAME))

all: static

$(NAME): static

help:
	@echo "Choose from:"
	@echo "so"
	@echo "static"
	@echo "tester"

so: $(BINDIR)/$(NAME).so

$(BINDIR)/$(NAME).so: $(BUILDDIR)/ $(BINDIR)/ $(OBJECTS)
	$(CC) -shared $(BUILDDIR)/*.$(OBJEXT) -o $(BINDIR)/$(NAME).so

static: $(BINDIR)/$(NAME).a

$(BINDIR)/$(NAME).a: $(BUILDDIR)/ $(BINDIR)/ $(OBJECTS)
	ar -cr $(BINDIR)/$(NAME).a $(BUILDDIR)/*.$(OBJEXT)

tester: static
	$(CC) $(CFLAGS) $(UNITTEST) -Iinclude/ -Lbin/ -lft -o tester

$(TESTNAME): $(BUILDDIR)/ $(BINDIR)/ $(TESTERDIR)/ static $(TESTSOURCES)
	$(CC) $(CFLAGS) $(TESTSOURCES) -I$(HEADERDIR)/ -L$(BINDIR)/ -o $(TESTNAME)$\
	 -l$(INCLUDENAME)

clean:
	/bin/rm -rf $(BUILDDIR)/

fclean: clean
	/bin/rm -f $(TESTNAME)
	/bin/rm -rf $(BINDIR)/

re: fclean all

$(BUILDDIR)/:
	@mkdir -p $(BUILDDIR)

$(BINDIR)/:
	@mkdir -p $(BINDIR)

$(BUILDDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	$(CC) $(CFLAGS) -I$(HEADERDIR)/ -c $< -o $@

.PHONY: all help so static tester clean fclean re
