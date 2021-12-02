#include "music.h"

Music::Music(char *newTitle, int newYear, char *newArtist, char *newPublisher, int newDurationS):Media(newTitle, newYear)
{
  title = newTitle;
  year = newYear;
  artist = newArtist;
  publisher = newPublisher;
  durationS = newDurationS;
}

char* Music::getArtist()
{
  return artist;
}

char* Music::getPublisher()
{
  return publisher;
}
int Music::getDuration()
{
  return durationS;
}