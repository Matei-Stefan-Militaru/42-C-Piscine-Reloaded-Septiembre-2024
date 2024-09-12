CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
RANLIB = ranlib

SRCS_DIR = srcs
INCLUDES_DIR = includes
OBJ_DIR = objs

SRCS = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJS)
	@$(AR) rcs $@ $(OBJS)
	@$(RANLIB) $@

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
