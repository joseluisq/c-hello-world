clang:
	@cd src \
	&& gcc -Wall -o main main.c \
			../lib/decimal_to_binary.c \
	&& ./main
.PHONY: clang
