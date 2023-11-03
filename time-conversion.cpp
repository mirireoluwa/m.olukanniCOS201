#include <iostream>

using namespace std;

int main ()
{
  cout << "Program to convert any given number into hours and mintues by Mirireoluwa Olukanni"<< endl;

  cout << "Enter a number in minutes: "<< endl;
  int num;
  cin >> num;

  int hours = num / 60;
  int mins = num % 60;

  cout << "The number you entered in mintues is converted to "<<hours<<":"<<mins<<" "<< endl;

  return 0;
}