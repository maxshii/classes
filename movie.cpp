#include "movie.h"

Movie::Movie(char *newTitle, int newYear, char *newDirector, int newDuration, int newRating):Media(newTitle, newYear)
{
  title = newTitle;
  year = newYear;
  director = newDirector;
  duration = newDuration;
  rating = newRating;
}

char* Movie::getDirector()
{
  return director;
}

int Movie::getDuration()
{
  return duration;
}

int Movie::getRating()
{
  return rating;
}