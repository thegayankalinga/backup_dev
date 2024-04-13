#include <iostream>
#include "functions.h"

int main()
{
  std::cout << "How many integers ?" << std::endl;
  int no_of_integers;

  std::cin >> no_of_integers;

  int numbers[no_of_integers];

  for (unsigned i = 0; i < no_of_integers; i++)
  {
    std::cout << "Enter number: " << i << std::endl;
    std::cin >> numbers[i];
  }

  std::cout << average(numbers, no_of_integers) << std::endl;
  std::cout << sum(numbers, no_of_integers) << std::endl;
  std::cout << minimum(numbers, no_of_integers) << std::endl;
}