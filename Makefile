CPP = g++
CPPFLAGS = -g -std=c++11
PROGS = strsplit.exe

# Cross-OS clean
ifdef OS
	RM = del /Q
else
	RM = rm -f
endif

.PHONY: all clean

all: $(PROGS)

strsplit.exe: strsplit.cpp
	$(CPP) $(CPPFLAGS) -o strsplit.exe strsplit.cpp

clean:
	$(RM) $(PROGS)