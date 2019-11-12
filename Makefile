### Makefile ###

CC = g++ 

CFLAGS = -pedantic -std=c++11

LDFLAGS = -lm

FONTES = 
$(wildcard *.cpp)

OBJETOS = 
$(FONTES:.cpp=.o)

EXECUTAVEL = comanda

all: $(EXECUTAVEL)

$(EXECUTAVEL): $(OBJETOS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp

clean:
	rm -rf *.o

rmproper: clean
	rm -rf $(EXECUTAVEL)

run: $(EXECUTAVEL)
	./(EXECUTAVEL)
