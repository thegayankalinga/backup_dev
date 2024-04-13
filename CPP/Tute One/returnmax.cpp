#include <iostream>

int maxOfFour(int one, int two, int three, int four)
{
  int max = one;

  if (two > max)
  {
    max = two;
  }

  if (three > max)
  {
    max = three;
  }

  if (four > max)
  {
    max = four;
  }

  return max;
}

int main()
{
  int number_array[4];

  for (int i = 0; i < 4; i++)
  {
    std::cout << "Enter number " << i + 1 << std::endl;
    std::cin >> number_array[i];
  }

  int max = maxOfFour(
      number_array[0],
      number_array[1],
      number_array[2],
      number_array[3]);

  std::cout << "Max Number is " << max << std::endl;

  return 0;
}