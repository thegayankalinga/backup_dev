#include <iostream>

int main()
{

  for (unsigned i = 1; i <= 100; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      std::cout << "FizzBuzz" << std::endl;
      continue;
    }

    if (i % 3 == 0)
    {
      std::cout << "Fizz" << std::endl;
      continue;
    }

    if (i % 5 == 0)
    {
      std::cout << "Buzz" << std::endl;
      continue;
    }

    std::cout << i << std::endl;
  }
  return 0;
}