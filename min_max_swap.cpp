#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  cout << min(a, b) << endl;
  cout << max({43242, 424, 24, 55, 5, 542452, 465, 56, 52}) << endl;

  // swap
  int temp = a;
  swap(a, b);

  cout << a << " " << b << endl;
  return 0;
}