#include<iostream>
#include<cstring>

#include "media.h"
#include "movie.h"

using namespace::std;

int main()
{
  char c[80] = "pog";
  char* b = new char;
  strcpy(b, c);
  Movie* m = new Movie(b, 2001, b, 90, 80);
  cout << (m->getTitle()) << m->getYear() << m->getRating();
}



