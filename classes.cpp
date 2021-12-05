#include<iostream>
#include<cstring>
#include<vector>

#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogame.h"

using namespace::std;

void add(vector<Media*>& vect);
void search();
void del(vector<Media*>& vect);

int main()
{
  char c[80] = "pog";
  char* b = new char;
  strcpy(b, c);
  char* d = new char;
  strcpy(d, "abd");
  Movie* m = new Movie(b, 2001, d, 90, 80);

  vector<Media*> data;
  data.push_back(m);

  vector<Media*>::iterator it;
  cout << static_cast<Movie*>(*data.begin())->getTitle();


  int i = 0;
  while(true)
  {
    
    add(data);
    
    for(it = data.begin(); it < data.end(); ++it)
    {
      cout<<(*it)->getTitle()<<endl;
      
    }
    cout << i++;
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
    cout << "Enter the artist: ";
    cin.getline(artist, 80);
    cout << "Enter the publisher";
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
    cout << "Enter the publisher";
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
  cin.ignore();
}

