#include "media.h"

Media::Media(char *newTitle, int newYear)
{
  title = newTitle;
  year = newYear;
}

Media::~Media()
{
  delete title;
}

char* Media::getTitle()
{
  return title;
}

int Media::getYear()
{
  return year;
}