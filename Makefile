SRC = sincos.c sine.c
OBJ = $(SRC:.c=.o)
TGT = sin
DEP = $(SRC:.c=.d)

sincos: $(OBJ)
	gcc -o $@ $+ -lm

%.o: %.cc Makefile
	gcc -MMD -Wall -Werror -c -o $@ $<

clean:
	rm -f $(OBJ) $(TGT) $(DEP)

-include $(DEP)

