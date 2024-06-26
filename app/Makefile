# Author: Rafael Garibotti

GCC_COMPILER=gcc
CLANG_COMPILER=clang

UNITY_ROOT=../Unity

CFLAGS=-std=c99
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition

TARGET = all_tests.out
SRC_FILES=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  src/bubble_sort.c \
  src/counting_sort.c \
  src/heap_sort.c \
  src/insertion_sort.c \
  src/merge_sort.c \
  src/quick_sort.c \
  src/radix_sort.c \
  src/selection_sort.c \
  src/sort.c \
  test/Test.c \
  test/test_runners/Test_Runner.c \
  test/test_runners/all_tests.c
INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src

all: clean compile run

compile:
	$(GCC_COMPILER) $(CFLAGS) $(INC_DIRS) $(SRC_FILES) -o $(TARGET)
	
run:
	./$(TARGET) -v

clean:
	rm -fr $(TARGET) *.gcno *.gcda *.gcov *.dSYM 

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem --suppress=unusedFunction $(INC_DIRS) src/sort.c

valgrind:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(INC_DIRS) $(SRC_FILES) -o $(TARGET)
	valgrind --leak-check=full --show-leak-kinds=all ./$(TARGET) -v

sanitizer:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(INC_DIRS) $(SRC_FILES) -o $(TARGET)
	./$(TARGET) -v

cov:
	$(GCC_COMPILER) $(CFLAGS) -fprofile-arcs -ftest-coverage $(INC_DIRS) $(SRC_FILES) -o $(TARGET)
	./$(TARGET) -v
	@echo $(wildcard *.gcda)
	gcov -b sort.c

ci: CFLAGS += -Werror
ci: compile
