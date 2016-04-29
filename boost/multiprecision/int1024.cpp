#include <iostream>
#include <string>
#include "boost/multiprecision/cpp_int.hpp"
using std::endl;
using std::cout;
using std::string;

int main() {

//uint64 getMaxValueOfBit(uint32 bits) {
  uint32_t bits = 64;
  #if 0
  using boost::multiprecision::cpp_int;
  cpp_int rets = 1;
  #endif
  using boost::multiprecision::uint1024_t;
  using boost::multiprecision::cpp_int;
  uint1024_t rets;
  // string maxValStr = "359538626972463181545861038157804946723595395788461314546860162315465351611001926265416954644815072042240227759742786715317579537628833244985694861278948248755535786849730970552604439202492188238906165904170011537676301364684925762947826221081654474326701021369172596479894491876959432609670712659248448274432";
  string maxValStr = "0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
  cpp_int strVal = static_cast<cpp_int>(maxValStr);
  //cpp_int strVal(maxValStr);


  rets = 1;
  rets <<=  1024;
  cout << std::hex << " (ret << 1024) " << rets << endl;

  rets = rets - 1;
  cout << std::hex << "ret = " << (rets - 1) << endl;
  cout << endl;

  cout << std::hex << "strVal = " << strVal << endl;
  cout << std::hex << "strVal -1 = " << (strVal - 1) << endl;
  cout << std::hex << "strVal +1 = " << (strVal + 1) << endl;

//  return ret;
//}


}
