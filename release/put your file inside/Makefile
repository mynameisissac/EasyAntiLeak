CPPFLAGS = -std=c++17

# goal of this Makefile
all : result_gen.exe 

# dependent files of result_gen
result_gen.exe : modified.o 
	g++ -static -static-libgcc -static-libstdc++ -o $@ $<

%.o: %.cpp
	g++ $(CPPFLAGS) -Wall -c -g -o $@  $<

# delete result_gen.exe and modified.cpp
clean: 
	del result_gen.exe 
	del modified.cpp
	del modified.o