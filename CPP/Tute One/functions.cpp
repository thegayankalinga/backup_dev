#include "functions.h"

float average(int array[], int length)
{
  float avg = 0;
  avg = sum(array, length) / length;

  return avg;
}

int minimum(int array[], int length)
{
  int min = array[0];
  for (unsigned i = 0; i < length; i++)
  {
    if (min > array[i])
    {
      min = array[i];
    }
  }

  return min;
}

int sum(int array[], int length)
{
  int sum = 0;
  for (unsigned i = 0; i < length; i++)
  {
    sum += array[i];
  }

  return sum;
}