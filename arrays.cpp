#include <iostream>

using namespace std;



int n, result = 0;

int main ()
{
  int score [] = {6, 3, 4, 2, 4};
  
  for (n = 0; n < 5; n++)
  {
    result += score[n]; //this adds all the elements to give the total of the sum of all the elements
  }

  cout << result;

  return 0;
}