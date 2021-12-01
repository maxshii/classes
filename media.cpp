
#include <cstring>
#include "media.h"

Media::Media(char *t, int y)
{
  title = new char[80];
  strcpy(title, t);
  year = y;
}

char* Media::getTitle()
{
  return title;
}

int Media::getYear()
{
  return year;
}