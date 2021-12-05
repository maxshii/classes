#ifndef MEDIA_H
#define MEDIA_H

class Media
{
  public:
    Media(char* newTitle, int newYear);
    ~Media();
    virtual void print();
    char* getTitle();
    int getYear();
  protected:
    char* title;
    int year;
};

#endif