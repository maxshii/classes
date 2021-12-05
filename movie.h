#include "media.h"

class Movie : public Media
{
  public:
    Movie(char *newTitle, int newYear, char *newDirector, int newDuration, int newRating);
    ~Movie();
    void print();
    char* getDirector();
    int getDuration();
    int getRating();
  protected:
    char* director;
    int duration;
    int rating;
};
