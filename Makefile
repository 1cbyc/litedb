CC = gcc
CFLAGS = -Wall -g
TARGET = litedb
SRCDIR = src
INCDIR = include

SOURCES = $(SRCDIR)/main.c $(SRCDIR)/storage.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -I$(INCDIR) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(SRCDIR)/*.o $(TARGET)
