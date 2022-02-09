CXX=g++
CC=$(CXX)
CXXFLAGS=-Wall -std=c++17
CFLAGS=$(CXXFLAGS)
LDFLAGS=
CPPFLAGS=-I./../../include
LIBS=

OUTDIR=./../../bin/

# Configure outputs
TARGET=uuid-gen

# Configure source files
SOURCES=$(wildcard ./*.cpp) 

# Configure obj files
OBJS=$(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(OUTDIR)$(TARGET) $(OBJS) $(CXXFLAGS) $(LDFLAGS) $(LIBS) $(CPPFLAGS)
	rm -rf $(OBJS)

