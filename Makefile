CC ?= cc
BASE_CFLAGS ?= -std=c11 -Wall -Wextra -pedantic
CFLAGS ?= $(BASE_CFLAGS) -O2
SANITIZE_FLAGS ?= -fsanitize=address,undefined -fno-omit-frame-pointer -g
SRC := $(shell find . -name '*.c' -not -path './build/*')
BIN := $(patsubst %.c,build/%, $(SRC))

.PHONY: all examples clean sanitize help

all: examples

examples: $(BIN)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

sanitize:
	$(MAKE) clean
	$(MAKE) CFLAGS="$(BASE_CFLAGS) $(SANITIZE_FLAGS)" examples

help:
	@echo "Available targets:"
	@echo "  all       Build all examples (default)"
	@echo "  examples  Build all C files into build/"
	@echo "  sanitize  Rebuild with AddressSanitizer and UBSanitizer"
	@echo "  clean     Remove build artifacts"
	@echo "  help      Show this message"

clean:
	rm -rf build
