# Nombre del ejecutable
EXEC = Sw_Invernadero.exe

# Archivos fuente
SRCS = $(wildcard *.c)

# Archivos objeto
OBJS = $(SRCS:.c=.o)

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Regla por defecto
all: $(EXEC)

# Regla para crear el ejecutable
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Regla para compilar archivos .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos compilados
clean:
# rm -f $(EXEC) $(OBJS)
# del /s *.exe
	del /s $(EXEC) $(OBJS)

# Regla para limpiar todo
distclean: clean

.PHONY: all clean distclean