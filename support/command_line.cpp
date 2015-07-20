#include <iostream>
#include <llvm/Support/CommandLine.h>

using std::cout;
using std::endl;
using namespace llvm;


int main(int argc, char **argv) {
  cl::ParseCommandLineOptions(argc, argv, " CommandLine compiler example\n\n"
                              "  This program blah blah blah...\n");
  cout << "hello LLVM CommandLine 2.0" << endl;
  return 0;
}
