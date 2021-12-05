#include<iostream>
#include<cstring>
#include<vector>

#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogame.h"

using namespace::std;

void add(vector<Media*>& vect);
void search(vector<Media*>& vect);
void del(vector<Media*>& vect);

int main()
{
  char c[80] = "baka";
  char* b = new char;
  strcpy(b, c);
  char* d = new char;
  strcpy(d, "abd");
  Movie* m = new Movie(b, 2001, d, 90, 80);

  char* f = new char;
  strcpy(f, "baka");
  Movie* chese = new Movie(f, 2001, f, 34, 43);

  
  vector<Media*> data;
  data.push_back(m);
  data.push_back(chese);


  int i = 0;
  //while(true)
  //{
    
    

    vector<Media*>::iterator it;
    for(auto it = data.begin(); it < data.end(); ++it)
    {
      cout<<(*it)->getTitle()<<endl;
      
    }
    del(data);
 
    cout << i++ << "\n\n";
    for(auto it = data.begin(); it < data.end(); ++it)
    {
      cout<<(*it)->getTitle()<<endl;
      
    }
    
  
  
}

void add(vector<Media*>& vect)
{
  cout << "Enter media type (movie, music, videogame): \n";
  char type[80];
  cin.getline(type, 80, '\n');
  if(strcmp(type, "movie") == 0)
  {
    char title[80];
    int year;
    char director[80];
    int duration;
    int rating;

    cout << "Enter the title: ";
    cin.getline(title, 80);
    cout << "Enter the year: ";
    cin >> year;
    cin.ignore(100, '\n');
    cout << "Enter the director: ";
    cin.getline(director, 80);
    cout << "Enter the duration as an integer in minutes: ";
    cin >> duration;
    cout << "Enter the rating as an integer on a scale of 0-5: ";
    cin >> rating;

    char *newTitle = new char;
    strcpy(newTitle, title);
    char *newDirector = new char;
    strcpy(newDirector, director);
    
    Movie *movie = new Movie(newTitle, year, newDirector, duration, rating);
    vect.push_back(movie);
  } 
  else if(strcmp(type, "music") == 0)
  {
    char title[80];
    int year;
    char artist[80];
    char publisher[80];
    int duration;
    

    cout << "Enter the title: ";
    cin.getline(title, 80);
    cout << "Enter the year: ";
    cin >> year;
    cin.ignore(100, '\n');
    cout << "Enter the artist: ";
    cin.getline(artist, 80);
    cout << "Enter the publisher: ";
    cin.getline(publisher, 80);
    cout << "Enter the duration as an integer in minutes: ";
    cin >> duration;
    

    char *newTitle = new char;
    strcpy(newTitle, title);
    char *newPublisher = new char;
    strcpy(newPublisher, publisher);
    char  *newArtist = new char;
    strcpy(newArtist, artist);

    
    Music *music = new Music(newTitle, year, newArtist, newPublisher, duration);
    vect.push_back(music);
  }
  else if(strcmp(type, "videogame") == 0)
  {
    char title[80];
    int year;
    char publisher[80];
    int rating;
    

    cout << "Enter the title: ";
    cin.getline(title, 80);
    cout << "Enter the year: ";
    cin >> year;
    cin.ignore(100, '\n');
    cout << "Enter the publisher: ";
    cin.getline(publisher, 80);
    cout << "Enter the rating as an integer on a scale of 0-5: ";
    cin >> rating;
    

    char *newTitle = new char;
    strcpy(newTitle, title);
    char *newPublisher = new char;
    strcpy(newPublisher, publisher);
    
    Videogame *game = new Videogame(newTitle, year, newPublisher, rating);
    vect.push_back(game);
  }
  cin.ignore(100, '\n');
}

void del(vector<Media*>& vect)
{
  char title[80] = "adc";

  vector<Media*>::iterator it;
  bool exit = false;
  while (exit == false)
  {
    
    for(it = vect.begin(); it < vect.end(); ++it)
      {
        if(strcmp((*it)->getTitle(), "baka") == 0)
        {
          cout << "del";
          delete *it;
          if (it == vect.end()-1){
            exit = true;
            cout<<"exit";
          }
          vect.erase(it);
        }
      }
    }
}
