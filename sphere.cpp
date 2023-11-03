#include <iostream>

using namespace std;
const float PI = 3.142;

int main ()
{
  // welcome message
  cout << "Program to calculate the volume of a sphere by Mirireoluwa Olukanni" << endl;

  float r; // radius
  cout << "Input the radius of the sphere in centimeters: " << endl;
  cin >> r;

  float V = (4.0/3.0) * PI * (r * r);
  cout << "The volume of the sphere is: "<<V<<"cm³";
}