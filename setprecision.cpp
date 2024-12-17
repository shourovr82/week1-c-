#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double d = 23.4242442;
  cout << fixed << setprecision(13) << d << endl;

  return 0;
}