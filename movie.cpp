
#include <cstring>
#include "movie.h"

Movie::Movie(char *newTitle, int newYear, char *d, int newDuration, int newRating):Media(newTitle, newYear)
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