#include "media.h"

class Videogame : public Media
{
  public:
    Videogame(char *newTitle, int newYear, char *newPublisher, float newRating);
    char* getPublisher();
    float getRating();
  protected:
  char* publisher;
  float rating;

};
