ifeq ($(shell uname),Darwin)
    LDFLAGS := -Wl,-dead_strip
else
    LDFLAGS := -Wl,--gc-sections -lpthread -ldl
endif

# CLang
clang-run: clang-build
	@./src/main
.PHONY: clang-run

clang-build:
	@cd src \
		&& gcc $(LDFLAGS) -o main main.c \
			../lib/decimal_to_binary.c
.PHONY: clang-build

# C++
cpp-run: cpp-build
	@./src/main
.PHONY: cpp-run

cpp-build:
	@cd src \
		&& g++ $(LDFLAGS) -o main main.cpp \
			../lib/decimal_to_binary.c
.PHONY: cpp-build

# Valgrind checker
valgrind:
	@valgrind --leak-check=yes ./src/main
.PHONY: valgrind
