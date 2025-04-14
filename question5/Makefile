
# output: main.o message.o
# 	g++ main.o message.o -o output

# main.o:main.cpp
# 	g++ -c main.cpp

# message.o: message.cpp message.h
# 	g++ -c message.cpp

# clean:
# 	rm *. output


que5 : que5main.o que5.o
	g++ que5main.o que5.o -o que5

que5main.o:que5main.cpp
	g++ -c que5main.cpp

que5.o: que5.cpp que5.hpp
	g++ -c que5.cpp

clean:
rm *. que5