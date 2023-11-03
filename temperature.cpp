#include <iostream>

using namespace std;

int main()
{ 
  cout << "Program to convert temperature in Kelvin to Fahrenheit by Mirireoluwa Olukanni" << endl;
  //Temperature Conversion from Kelvin to Fahrenheit
  float K;
  cout << "Input the temperature value in Kelvin: ";
  cin >> K;
  cout << "Inputted Value: "<<K<<" K" << endl;

  float M = ((K-273.15) * 9.0) / 5.0;
  float F = M + 32.0;
  cout << "The Temperature is: "<<F<<"°F";

  return 0;
}