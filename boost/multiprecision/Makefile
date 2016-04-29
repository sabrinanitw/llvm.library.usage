HOST_TOOLS_PATH :=/usr/bin/
GCC = $(HOST_TOOLS_PATH)gcc
CXX = $(HOST_TOOLS_PATH)g++
LLVM-CONFIG := llvm-config
CFLAGS = $(shell $(LLVM-CONFIG) --cflags) -g3 -O2 -std=c++11
LDFLAGS = $(shell $(LLVM-CONFIG) --ldflags)
LIBS = $(shell $(LLVM-CONFIG) --libs support) -lboost_system -lboost_filesystem
SYSTEMLIBS = $(shell $(LLVM-CONFIG) --system-libs)


exe = int1024.exe

all: $(exe)

$(exe): %.exe: %.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) $< $(LIBS) $(SYSTEMLIBS) -o $@

.PHONY: clean
clean:
	-rm $(exe)


