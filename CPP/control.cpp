#include <iostream>

int main()
{
  int x = 10;
  char ch = 'A';

  if (x > 10)
  {
    std::cout << "statement 01" << std::endl;
    std::cout << "statement 02" << std::endl;
  }
  else if (x == 0)
  {
    std::cout << "else if statement" << std::endl;
  }
  else
  {
    std::cout << "else statement" << std::endl;
  }

  switch (ch)
  {
  case 'a':
    std::cout << "simple" << std::endl;
    break;
  case 'A':
    std::cout << "capital" << std::endl;
    break;
  default:
    std::cout << "none" << std::endl;
    break;
  }

  for (int i = 0; i < 5; i++)
  {
    std::cout << "number " << i << std::endl;
  }

  while (x < 10)
  {
    std::cout << x << std::endl;
    x++;
  }

  int y = 15;
  do
  {
    std::cout << y << std::endl;
    y++;
  } while (y < 10);

  try
  {
    std::cout << "inside try block" << std::endl;

    if (x > 0)
    {
      throw x;
      std::cout << "after throw" << std::endl;
    }
  }
  catch (int x)
  {
    std::cout << "Inside catch block: expception" << std::endl;
  }
  std::cout << "outside try-catch block" << std::endl;

  int counter = 0;
  for (int x = 1; x <= 30; x++)
  {
    if (x % 3 == 0)
    {
      counter++;
    }
  }
  std::cout << "counter: " << counter << std::endl;

  int counter_two = 0;
  int z = 1;
  while (z <= 100)
  {
    if (z % 7 == 0)
    {
      counter_two++;
      std::cout << z << std::endl;
    }
    z++;
  }
  std::cout << "divisible by seven: " << counter_two << std::endl;

  return 0;
}