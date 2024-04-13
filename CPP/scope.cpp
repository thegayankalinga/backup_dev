#include <iostream>

int global_var = 100;

void print()
{
  std::cout << global_var << std::endl;
  // std::cout << local_var << std::endl;
  //-> error out of scope
}

int main()
{
  int local_var = 10;
  int global_var = 1000;

  std::cout << local_var << std::endl;

  std::cout << "Global: " << ::global_var << std::endl;
  std::cout << "Local: " << global_var << std::endl;

  print();

  return 0;
}