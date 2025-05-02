CC=g++
CCFLAGS=-c
DEPS=binTodec.h
TARGET=my
OBJS=binTodecmain.o binTodec.o

all:$(TARGET)
	./$(TARGET)

%.o: %.cpp $(DEPS)
	$(CC) $(CCFLAGS) -o $@ $<

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

# clean:
# 	rm -f $(TARGET) $(OBJS)
clean:
	del /Q $(TARGET) $(OBJS)
