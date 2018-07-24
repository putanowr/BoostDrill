#include <iostream>
#include <boost/format.hpp>

using namespace std;
using boost::format;

int main(int argc, char *argv[])
{
   // Initialize matrix for initializer list
   cout << format("ala %1%") % 123.99 << endl;

   return 0;
}
