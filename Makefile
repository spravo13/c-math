CXX = gcc-4.9
EXE = c-math
LIBS = -lm
RM = rm -f

all:
	$(CXX) src/*.c -o $(EXE) $(LIBS)

install: all
	cp -v $(EXE) /usr/bin/

run: all
	./$(EXE)

uninstall:
	$(RM) /usr/bin/$(EXE)

clean:
	$(RM) $(EXE)
