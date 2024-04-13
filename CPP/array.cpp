#include <iostream>

int main()
{

  int numbers[3] = {2, 5, 3};

  for (int number : numbers)
  {
    std::cout << number << std::endl;
  }

  int student_marks[3][3] = {
      {75, 80, 90},
      {82, 90, 30},
      {90, 93, 70}};

  for (unsigned x = 0; x < 3; x++)
  {
    for (unsigned y = 0; y < 3; y++)
    {
      std::cout << "Mark of "
                << x << "for " << y << ": "
                << student_marks[x][y] << ", ";
    }
    std::cout << "\n";
  }

  return 0;
}