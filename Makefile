BIN_NAME = hangman
TEST_BIN_NAME = $(BIN_NAME)_test
CC = gcc
SRC_EXT = c
SRC_PATH = src
TEST_PATH = test
LIBS =
COMPILE_FLAGS = 
RCOMPILE_FLAGS = -D NDEBUG -O2
DCOMPILE_FLAGS = -D DEBUG -O0 -g
INCLUDES = -I $(SRC_PATH)/ 
LINK_FLAGS = -lncursesw
print-%: ; @echo $*=$($*)
SHELL = /bin/bash

ifneq ($(LIBS),)
	COMPILE_FLAGS += $(shell pkg-config --cflags $(LIBS))
	LINK_FLAGS += $(shell pkg-config --libs $(LIBS))
endif

release: export CFLAGS := $(CFLAGS) $(COMPILE_FLAGS) $(RCOMPILE_FLAGS)
release: export LDFLAGS := $(LDFLAGS) $(LINK_FLAGS)
debug: export CFLAGS := $(CFLAGS) $(COMPILE_FLAGS) $(DCOMPILE_FLAGS)
debug: export LDFLAGS := $(LDFLAGS) $(LINK_FLAGS)

release: export BUILD_PATH := build/release
release: export BIN_PATH := .
debug: export BUILD_PATH := build/debug
debug: export BIN_PATH := .

SOURCES = $(shell find $(SRC_PATH)/ -name '*.$(SRC_EXT)')
LIB_SOURCES = $(filter-out $(SRC_PATH)/main.c, $(SOURCES))
TEST_SOURCES = $(shell find $(TEST_PATH)/ -name '*.$(SRC_EXT)')

OBJECTS = $(SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/$(SRC_PATH)/%.o)
TEST_OBJECTS = \
    $(LIB_SOURCES:$(SRC_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/$(SRC_PATH)/%.o) \
    $(TEST_SOURCES:$(TEST_PATH)/%.$(SRC_EXT)=$(BUILD_PATH)/$(TEST_PATH)/%.o)

DEPS = $(OBJECTS:.o=.d) $(TEST_OBJECTS:.o=.d)

.PHONY: release
release: dirs
	@echo "Beginning release build"
	@$(MAKE) all --no-print-directory
	@echo

.PHONY: debug
debug: dirs
	@echo "Beginning debug build"
	@$(MAKE) all --no-print-directory
	@echo

.PHONY: dirs
dirs:
	@echo "Creating directories"
	@mkdir -p $(dir $(OBJECTS))
	@mkdir -p $(dir $(TEST_OBJECTS))

.PHONY: clean
clean:
	$(RM) -r build
	$(RM) -r $(BIN_NAME)
	$(RM) -r $(TEST_BIN_NAME)

.PHONY: all
all: $(BIN_PATH)/$(BIN_NAME) $(BIN_PATH)/$(TEST_BIN_NAME)

$(BIN_PATH)/$(BIN_NAME): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

$(BIN_PATH)/$(TEST_BIN_NAME): $(TEST_OBJECTS)
	$(CC) $(TEST_OBJECTS) $(LDFLAGS) -o $@

-include $(DEPS)

$(BUILD_PATH)/$(SRC_PATH)/%.o: $(SRC_PATH)/%.$(SRC_EXT)
	$(CC) $(CFLAGS) $(INCLUDES) -MP -MMD -c $< -o $@

$(BUILD_PATH)/$(TEST_PATH)/%.o: $(TEST_PATH)/%.$(SRC_EXT)
	$(CC) $(CFLAGS) $(INCLUDES) -MP -MMD -c $< -o $@
