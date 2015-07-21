#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Path.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using namespace llvm;
using namespace llvm::cl;
using namespace llvm::sys::path;

#define STR(x) #x
#define BUILD_YEAR_CH0 (__DATE__[ 7])
#define BUILD_YEAR_CH1 (__DATE__[ 8])
#define BUILD_YEAR_CH2 (__DATE__[ 9])
#define BUILD_YEAR_CH3 (__DATE__[10])


// ACE file
opt<string> AceFile(Positional, Required, desc("{acefile}.ace"));

static void copilotVersionPrinter(void) {
  cout << "Copyright (C) 2013-";
  cout << BUILD_YEAR_CH0 << BUILD_YEAR_CH1 << BUILD_YEAR_CH2 << BUILD_YEAR_CH3;
  cout << " Andes Technology Corporation\n";
  cout << "COPILOT 4.0.0 beta (build at " << __DATE__ << ", " << __TIME__ << ")\n";
  cout << "All rights reserved." << endl;
}

int main(int argc, char **argv) {
  string ExtStr;
  string FilenameStr;
  string AbsolutePathStr;

  SetVersionPrinter(&copilotVersionPrinter);
  ParseCommandLineOptions(argc, argv);

  cout << "hello LLVM CommandLine 2.0" << endl;
  ExtStr = llvm::sys::path::extension(AceFile).str();
  FilenameStr = llvm::sys::path::filename(AceFile).str();
  cout << "acefile extension is " << ExtStr << endl;
  cout << "acefile filename is " << FilenameStr << endl;
  cout << "acefile rootPath is " << AbsolutePathStr << endl;
  return 0;
}
