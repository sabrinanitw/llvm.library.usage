# llvm.library.usage
learning llvm

sample code to use llvm API

2015.7.20
  The first problem I encounter is that how to link llvm library. How could I
know the library name which provids function I was using.

  Kito show me how to use llvm-config.

2015.7.21
  The filesystem support of llvm is lame currently. Follow Kito's suggestion
  to use Boost.Filesystem library instead.


================================================================================
BOOST
================================================================================
# boost provides better filesystem library support
The Boost.Filesystem library provides facilities to manipulate files and
directories, and the paths that identify them.
(http://www.boost.org/doc/libs/1_57_0/libs/filesystem/doc/index.htm)

================================================================================
llvm-config
================================================================================
$ llvm-config
usage: llvm-config <OPTION>... [<COMPONENT>...]

Get various configuration information needed to compile programs which use
LLVM.  Typically called from 'configure' scripts.  Examples:
  llvm-config --cxxflags
  llvm-config --ldflags
  llvm-config --libs engine bcreader scalaropts

$ llvm-config --ldflags --libs
$ llvm-config --ldflags --libs  support
                                ^^^^^^^
                                #include <llvm/Support/Path.h>
                                               ^^^^^^^

$ llvm-config --components
 all all-targets analysis asmparser asmprinter bitreader bitwriter codegen core cppbackend cppbackendcodegen cppbackendinfo debuginfo engine executionengine instcombine instrumentation interpreter ipa ipo irreader jit lineeditor linker lto mc mcanalysis mcdisassembler mcjit mcparser native nativecodegen objcarcopts object option profiledata r600 r600asmprinter r600codegen r600desc r600info runtimedyld scalaropts selectiondag support tablegen target transformutils vectorize x86 x86asmparser x86asmprinter x86codegen x86desc x86disassembler x86info x86utils

