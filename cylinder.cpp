#include <iostream>

using namespace std;
const float PI =  3.142;

int main()
{ 
    cout << "Program to calculate the volume of a cylinder by Mirireoluwa Olukanni" << endl;
  // volume of a cylinder
  float h; //height
  cout << "Input the value of the height of the cylinder: ";
  cin >> h;
  float r; //radius
  cout << "Input the value of the radius of the cylinder in centimeters: ";
  cin >> r;

  float V = PI * h * (r * r);
  cout << "The volume of the cylinder is "<<V<<" cm³";

  return 0;
}