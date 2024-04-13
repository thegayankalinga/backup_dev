#include <iostream>
#include <string>

using namespace std;

struct Student
{
  std::string name;
  std::string fav_programming_lang;
  int height;
};

void tallest(Student students[])
{

  int max = students[0].height;
  int index = 0;

  for (int i = 0; i < 10; i++)
  {
    if (max < students[i].height)
    {
      max = students[i].height;
      index = i;
    }
  }

  cout << students[index].name;
}

void pythonLikers(Student students[])
{
}

void likedBy(Student students[], std::string search_key)
{
  for (int i = 0; i < 10; i++)
  {
    if (students[i].name == search_key)
    {
      cout << students[i].fav_programming_lang;
    }
  }
}

void populerLang(Student students[])
{
}

int main()
{

  Student students[10];

  for (unsigned i = 0; i < 10; i++)
  {
    cout << "Enter: " << i << "Student Details" << endl;
    cout << "Enter Name: " << endl;
    cin >> students[i].name;

    cout << "Enter Fav Language: " << endl;
    cin >> students[i].fav_programming_lang;

    cout << "Enter height: " << endl;
    cin >> students[i].height;
  }

  return 0;
}
