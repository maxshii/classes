#include "media.h"
#include <iostream>

using namespace::std;

Media::Media(char *newTitle, int newYear)
{
  title = newTitle;
  year = newYear;
}

Media::~Media()
{
  delete title;
}

void Media::print()
{
  cout << "Title: " << title << "\nYear: " << year << endl;
}

char* Media::getTitle()
{
  return title;
}

int Media::getYear()
{
  return year;
}