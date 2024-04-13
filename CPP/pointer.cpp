#include <iostream>
#include <string>

using namespace std;

int main()
{
  int var_number = 400;
  cout << "var_number: " << var_number << endl;

  int *var_pointer = &var_number;
  cout << "var_pointer: " << var_pointer << endl;

  *var_pointer = 500;
  cout << "var_number after pointer change: " << var_number << endl;

  int second_number = *var_pointer;
  cout << "second number: " << second_number << endl;

  second_number = 700;
  cout << "second number after change: " << second_number << endl;
  cout << "var_number after second number change: " << var_number << endl;

  return 0;
}