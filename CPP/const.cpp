#include <iostream>

int main()
{

  const int const_one = 10;
  int var_one = 120;
  // const_one = 12;

  constexpr int const_express = 15;

  // const_express = 16;
  // => Error will be thrown

  // Referencing
  const int &ref_name = const_one;

  // Pointers
  const int *pointer_name = &const_one;
  const int *pointer_var = &var_one;

  int const_third = 11;
  const int *pointer_third = &const_third;

  int *const pointer_four = &const_third;

  std::cout << pointer_third << std::endl;

  std::cout << *pointer_third << std::endl;
  return 0;
}