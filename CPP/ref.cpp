#include <iostream>

int main()
{
  int a = 10;
  float b = 5.75f;
  int *p = &a;

  int &c = a;
  int *d;
  int *g = p;

  std::cout
      << *p << std::endl;

  // float &i = &b;
  //=> &b contains a pointer and cannot be assigned to reference type

  //  int &d;
  //=> error require initializer

  // int *h = &p;
  //= > trying to assign pointer to a double pointer wont work unless int **h = &p;

  //  int *h = a;
  //=> cannot assign a int value to pointer

  // int *h = &b;
  //=> trying to assign float pointer to int pointer

  //  int *h = *p;
  //=> error thrown trying to assign dereferenced value hold by a (10) to a pointer wont work.

  std::cout
      << p << std::endl;
  std::cout
      << d << std::endl;

  return 0;
}