#ifndef MEDIA_H
#define MEDIA_H

class Media
{
  public:
    Media(char* t, int y);
    char* getTitle();
    int getYear();
  
  protected
    char* title;
    int year;
};

#endif