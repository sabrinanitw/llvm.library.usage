#include <boost/version.hpp>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

#define MAJOR       (BOOST_VERSION / 100000)
#define MINOR       ((BOOST_VERSION / 100) % 1000)
#define SUBMINOR    (BOOST_VERSION % 100)
int main(int argc, char **argv) {

  cout << "Boost Macros - BOOST_VERSION: " << BOOST_VERSION << '\n';
  cout << "Using Boost "
       << MAJOR << "." << MINOR << "." << SUBMINOR << endl;

  return 0;
}
