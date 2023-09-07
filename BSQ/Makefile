# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ccraciun <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2023/09/06 20:15:03 by ccraciun      #+#    #+#                  #
#    Updated: 2023/09/06 20:15:19 by ccraciun      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC_FILES = alloc_mem.c find_square.c check_functions.c free_arrays.c check_input.c input_to_arrays.c algorithm.c extract_from_array.c main.c output_handeling.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# Executable name
EXECUTABLE = bsq

# Default target
all: $(EXECUTABLE)

# Linking step
$(EXECUTABLE): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation step for each source file
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean up
clean:
	rm -f $(OBJ_FILES) $(EXECUTABLE)

# Phony targets
.PHONY: all clean

