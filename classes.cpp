#include<iostream>
#include<cstring>

#include "media.h"


using namespace::std;

int main()
{
  char* b = new char;
  strcpy(b, "pog");
  Media* m = new Media(b, 2001);

  int a = m->getYear();
  cout << a;
}



