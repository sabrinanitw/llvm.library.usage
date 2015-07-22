HOST_TOOLS_PATH := /home/users/sabrina/bs3.20150721.host-tool/host-tools/bin
GCC = $(HOST_TOOLS_PATH)/gcc
CXX = $(HOST_TOOLS_PATH)/g++
CFLAGS = -O2 -std=c++11
LDFLAGS =
LIBS =
SYSTEMLIBS =


exe = boost_version.exe

all: $(exe)

$(exe): %.exe: %.cpp
	$(CXX) $(CFLAGS) $(LDFLAGS) $< $(LIBS) $(SYSTEMLIBS) -o $@

.PHONY: clean
clean:
	-rm $(exe)


