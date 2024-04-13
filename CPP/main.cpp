#include <iostream>

int main()
{

  int foo;
  int bar = 10;
  float price = 5.3, cost = 10.1;
  // auto val = 5.6;
  auto val = 5.6f;
  auto var = val;
  int a = 0, b = {1}, c(0);

  auto address = &bar;

  int *pointer = &bar;
  int *pointer_two = pointer;
  int **pointer_three = &pointer_two;

  int &ref_one = bar;

  /* wrong declarations
  auto foo2;
  sum = 0;
  */

  std::cout << ref_one << std::endl;

  return 0;
}