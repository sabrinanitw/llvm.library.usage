#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Path.h"
#include <boost/filesystem.hpp>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using namespace llvm;
using namespace llvm::cl;
using namespace llvm::sys::path;
namespace bf = boost::filesystem;   // Using namespace alias

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

  SetVersionPrinter(&copilotVersionPrinter);
  ParseCommandLineOptions(argc, argv);

  cout << "hello LLVM CommandLine 2.0" << endl;

  bf::path AceFilePath = AceFile.c_str();
  bf::path AceFullPath = bf::complete(AceFilePath);

  cout << "acefile stem is " << AceFilePath.stem().generic_string() << endl;
  cout << "acefile extension is " << AceFilePath.extension().generic_string() << endl;
  cout << "acefile filename is " << AceFilePath.filename().generic_string() << endl;
  cout << "acefile rootPath is " << AceFullPath.parent_path().generic_string() << endl;
  return 0;
}
