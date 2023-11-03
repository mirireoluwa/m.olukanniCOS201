#include <iostream>

using namespace std;

int main ()
{
  int n;
  cout <<"Enter the number: ";
  cin >> n;
  int j;
  int i;
  for (i = 1; i <= 12; i++)
  {
    for (j = 1; j <= n; j++) 
    {
      cout <<j<<" X " <<i<<" = " <<i*j<<"\t";
    }
    cout<<endl;
  }

  return 0;
}