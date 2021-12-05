#include "music.h"
#include <iostream>

using namespace::std;

Music::Music(char *newTitle, int newYear, char *newArtist, char *newPublisher, int newDurationS):Media(newTitle, newYear)
{
  title = newTitle;
  year = newYear;
  artist = newArtist;
  publisher = newPublisher;
  durationS = newDurationS;
}

Music::~Music()
{
  delete artist;
  delete publisher;
}

void Music::print()
{
  cout << "\nTitle: " << title << "\nYear: " << year << "\nArtist: " << artist << "\nPublisher: " << publisher << " min\nDuration: " << durationS << "/5\n\n";
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