#include "movie.h"
#include <iostream>

using namespace::std;

Movie::Movie(char *newTitle, int newYear, char *newDirector, int newDuration, int newRating):Media(newTitle, newYear)
{
  title = newTitle;
  year = newYear;
  director = newDirector;
  duration = newDuration;
  rating = newRating;
}

Movie::~Movie()
{
  delete director;
}

void Movie::print()
{
  cout << "\nTitle: " << title << "\nYear: " << year << "\nDirector: " << director << "\nDuration: " << duration << " min\nRating: " << rating << "/5\n\n";
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