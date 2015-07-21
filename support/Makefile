CXX := g++
LLVM-CONFIG := llvm-config
CFLAGS = $(shell $(LLVM-CONFIG) --cflags) -g3 -O2 -std=c++11
LDFLAGS = $(shell $(LLVM-CONFIG) --ldflags)
LIBS = $(shell $(LLVM-CONFIG) --libs support)
SYSTEMLIBS = $(shell $(LLVM-CONFIG) --system-libs)


exe = sys_path.exe \
command_line.exe

all: $(exe)

$(exe): %.exe: %.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) $< $(LIBS) $(SYSTEMLIBS) -o $@

.PHONY: clean
clean:
	-rm $(exe)


