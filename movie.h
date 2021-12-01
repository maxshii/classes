#include "media.h"

class Movie : public Media
{
  public:
    Movie(char *newTitle, int newYear, char *d, int newDuration, int newRating);
    char* getDirector();
    int getDuration();
    int getRating();
  protected:
    char director[80];
    int duration;
    int rating;
};
