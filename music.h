#include "media.h"

class Music : public Media
{
  public:
    Music(char *newTitle, int newYear, char *newArtist, char *newPublisher, int newDurationS);
    ~Music();
    void print();
    char* getArtist();
    char* getPublisher();
    int getDuration();
  protected:
    char* artist;
    char* publisher;
    int durationS;
  
};
