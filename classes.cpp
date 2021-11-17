#include<iostream>
#include<cstring>

#include "media.h"
#include "movie.h"

using namespace::std;

int main()
{
  Movie m;
  strcpy(m.title, "Baka");
  cout << m.title << endl;
}



