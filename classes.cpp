#include<iostream>
#include<cstring>

#include "media.h"


using namespace::std;

int main()
{

  char c[80] = "pog";
  char* b = new char;
  strcpy(b, c);
  Media* m = new Media(b, 2001);
  cout << (m->getTitle()) << m->getYear();
}



