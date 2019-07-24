CXX=g++
RM=rm -rf
CPPFLAGS=-g  -std=c++11 -Wall -Wextra
LDLIBS= -lpthread

all:  dirs build/scheduler

build/scheduler: build/lane.o
	$(CXX) $(LDFLAGS)  src/main.cpp $(LDLIBS) build/lane.o -o build/scheduler

build/lane.o:
	$(CXX) $(LDFLAGS) -c  src/lane/lane.cpp  $(LDLIBS) -o build/lane.o

dirs:
	@mkdir build

.PHONY: clean
clean:
	$(RM) build/