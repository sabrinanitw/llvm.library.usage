CXX := g++
CFLAGS := -g3 -O2 -std=c++11
LIB := -lLLVMSupport -lpthread -ldl

exe = sys_path.exe \
command_line.exe

all: $(exe)

$(exe): %.exe: %.cpp
	$(CXX) $(CFLAGS) $< $(LIB) -o $@

.PHONY: clean
clean:
	-rm $(exe)


