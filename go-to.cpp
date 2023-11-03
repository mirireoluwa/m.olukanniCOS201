#include <iostream>

using namespace std;

int main ()
{
  int n = 10;

loop:
  cout << n << ", ";
  n--;

  goto loop; //loop here is a label, it can be replaced with 'x' or any other variable name
  cout << "End of loop!\n";

  return 0;
}