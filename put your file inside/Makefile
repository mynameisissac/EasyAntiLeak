CPPFLAGS = -std=c++17

# goal of this Makefile
all : sample.exe 

# dependent files of sample
sample.exe : *.cpp
	g++ -o $@ $(CPPFLAGS) $<

# delete sample.exe
clean: 
	del sample.exe 
