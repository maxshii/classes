#include "videogame.h"

Videogame::Videogame(char *newTitle, int newYear, char *newPublisher, float newRating):Media(newTitle, newYear)
{
  title = newTitle;
  year = newYear;
  publisher = newPublisher;
  rating = newRating;
}

Videogame::~Videogame()
{
  delete publisher;
}

char* Videogame::getPublisher()
{
   return publisher;
}

float Videogame::getRating()
{
  return rating;
}