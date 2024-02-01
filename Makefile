CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
PRINT = binary_tree_print.c

%:
	$(CC) $(CFLAGS) $(PRINT) $(SRC)

0: SRC=mains/$*-main.c $*-*.c -o 0-node

1: SRC=mains/$*-main.c $*-*.c 0-binary_tree_node.c -o 1-left

2: SRC=mains/$*-main.c $*-*.c 0-binary_tree_node.c -o 2-right

3 4 5 6 7 8 9 10 11 12 13: SRC=mains/$@-main.c $*-*.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o $@

14 15 16 17 18 100: SRC=mains/$*-main.c $*-*.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c -o $@

101 102 103 104: SRC=mains/$*-main.c $*-*.c 0-binary_tree_node.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c 3-binary_tree_delete.c -o $@

fclean:
	$(RM) 0-node
