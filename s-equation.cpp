#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  cout << "Program to solve simultaneous equation by Mirireoluwa Olukanni." << endl;
  int a1, b1, c1, a2, b2, c2;
  cout << "a1X + b1Y = c1 --- equation 1" << endl;
  cout << "a2X + b2Y = c2 --- equation 2" << endl;

  cout << "Enter the value of a1: ";
  cin >> a1;

  cout << "Enter the value of b1: ";
  cin >> b1;

  cout << "Enter the value of c1: ";
  cin >> c1;

  cout << "Enter the value of a2: ";
  cin >> a2;

  cout << "Enter the value of b2: ";
  cin >> b2;

  cout << "Enter the value of c2: ";
  cin >> c2;

  //using the elimination method
  int A1 = a1 * a2;
  int B1 = b1 * a2;
  int C1 = c1 * a2;
  int A2 = a2 * (a1 * (-1)) ;
  int B2 = b2 * (a1 * (-1)) ;
  int C2 = c2 * (a1 * (-1)) ;

  int B = B1 + B2;
  int C = C1 + C2;
  int Y = C / B;

  int M = Y * b1;
  int X = c1 - M;

  X = X / a1;

  cout << "X = " << X << " ,Y = " << Y << endl;
  cout << "Thank you for using Mirireoluwa's program!" << endl;
}
