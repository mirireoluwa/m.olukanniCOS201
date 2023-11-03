#include <iostream>

using namespace std;

int main ()
{
    cout << "Program to calculate the volume of a cube by Mirireoluwa Olukanni" << endl;
  float a;
  cout << "Input the area of one the sides of the cube in centimeters: ";
  cin >> a;

  float V = a * a * a;
  cout << "The volume of the cube is "<<V<<" cm³";
}