CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -pedantic -O2
SRC := $(shell find . -name '*.c' -not -path './build/*')
BIN := $(patsubst %.c,build/%, $(SRC))

.PHONY: all examples clean

all: examples

examples: $(BIN)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf build
