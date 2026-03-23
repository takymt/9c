CC := gcc
CFLAGS := -O2 -Wall -Wextra -Wwrite-strings -Wformat=2 -std=c11
LDFLAGS :=

BIN_DIR := bin
SRC ?=
TARGET := $(basename $(notdir $(SRC)))
OUT := $(BIN_DIR)/$(TARGET)

.DEFAULT_GOAL := build
.PHONY: build run clean

ifneq ($(filter build run,$(MAKECMDGOALS)),)
ifeq ($(strip $(SRC)),)
$(error SRC is not set. Usage: make run SRC=path/to/main.c)
endif
ifeq ($(wildcard $(SRC)),)
$(error Source file '$(SRC)' not found)
endif
endif

build: $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -rf $(BIN_DIR)

$(OUT): $(SRC) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

$(BIN_DIR):
	@mkdir -p $(BIN_DIR)
