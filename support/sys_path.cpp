#include <iostream>
#include <string>
#include <llvm/Support/Path.h>

//using llvm::sys::path;
using namespace llvm;
using std::cout;
using std::string;
string filename = "C:\\MyDirectory\\MyFile.bat";

int
main(int argc, char** argv) {

  string ExtStr;
  cout << "filename is " << filename << "\n";
  ExtStr = llvm::sys::path::extension(filename).str();
  //ExtStr = extension(filename).str();
  cout << "extension is " << ExtStr << "\n";
  return 0;
}
