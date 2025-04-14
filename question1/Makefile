CC=g++
CCFLAGS=-c
DEPS=que1.hpp
TARGET=que1
OBJS=main.o que1.o

%.o: %.cpp $(DEPS)
	$(CC) $(CCFLAGS) -o $@ $<

$(TARGET):$(OBJS)
	$(CC) -O $(TARGET) $(OBJS)

clean:
	rm -f $(TARGET) $(OBJS)