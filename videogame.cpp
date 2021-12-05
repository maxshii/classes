#include "videogame.h"
#include <iostream>

using namespace::std;

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

void Videogame::print()
{
  cout << "\nTitle: " << title << "\nYear: " << year << "\nPublisher: " << publisher << " min\nRating: " << rating << "/5\n\n";
}

char* Videogame::getPublisher()
{
   return publisher;
}

float Videogame::getRating()
{
  return rating;
}