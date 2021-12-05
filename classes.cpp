/*
 *This program will allow the user to add, search, and delete items in a database of *different media
 *Author: Max Shi
 *12/5/2021
 */
#include<iostream>
#include<cstring>
#include<vector>

#include "media.h"
#include "movie.h"
#include "music.h"
#include "videogame.h"

using namespace::std;

void add(vector<Media*> &vect);
void search(vector<Media*> &vect);
void del(vector<Media*> &vect);

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

  while(true)
  {
    cout << "Enter command (ADD, SEARCH, DELETE, QUIT)\n";
    char input[80];
    cin.getline(input, 80, '\n');

    if(strcmp(input, "ADD") == 0)
    {
      add(data);
    }
    else if(strcmp(input, "SEARCH") == 0)
    {
      search(data);
    }
    else if(strcmp(input, "DELETE") == 0)
    {
      del(data);
    }
    else if(strcmp(input, "QUIT") == 0)
    {
      break;
    }

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
    cin.ignore();

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
    cout << "Enter the duration as an integer in seconds: ";
    cin >> duration;
    cin.ignore();

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
    cin.ignore();

    char *newTitle = new char;
    strcpy(newTitle, title);
    char *newPublisher = new char;
    strcpy(newPublisher, publisher);
    
    Videogame *game = new Videogame(newTitle, year, newPublisher, rating);
    vect.push_back(game);
  }
  
}

void search(vector<Media*> &vect)
{
  cout << "Search using title or year?\n";
  char input[80];
  cin.getline(input, 80);

  if(strcmp(input, "title") == 0) // search by title
  {
    char title[80];
    cout << "Enter title to search: ";
    cin.getline(title, 80);

    int count = 0;
    vector<Media*>::iterator it;

    
    for(it = vect.begin(); it < vect.end(); ++it)
      {
        if(strcmp((*it)->getTitle(), title) == 0)
        {
          count++;
          (*it)->print();
        }
      }
      
      cout << "Found " << count << " items\n\n";
  }
  else if(strcmp(input, "year") == 0) //search by year
  {
    int year;
    cout << "Enter year to search: ";
    cin >> year;
    cin.ignore();

    int count = 0;
    vector<Media*>::iterator it;

    for(it = vect.begin(); it < vect.end(); ++it)
      {
        if((*it)->getYear() == year)
        {
          count++;
          (*it)->print();
        }
      }
      
      cout << "Found " << count << " items\n\n";
  }
}

void del(vector<Media*> &vect)
{
  cout << "Delete by title or year?\n";
  char input[80];
  cin.getline(input, 80);

  if(strcmp(input, "title") == 0) // delete by title
  {
    char title[80];
    cout << "Enter title to delete: ";
    cin.getline(title, 80);

    int count = 0;
    vector<Media*>::iterator it;
    bool exit = false;

    auto start = vect.begin();
    while(it != vect.end())
    {
      it = start;
      while(it != vect.end())
      {
          if(strcmp((*it)->getTitle(), title) == 0)
          {
            (*it)->print();
            cout << "Delete this item? (y/n)\n";
            cin.getline(input, 80);
            if(strcmp(input, "y") == 0)
            {
              count++;
              start = it;
              delete *it;
              vect.erase(it);
              break;
            }
          }
          it++;
      }
      
    }
      cout << "Deleted " << count << " items\n";
  }
  else if(strcmp(input, "year") == 0) //delete by year
  {
    int year;
    cout << "Enter year to delete: ";
    cin >> year;
    cin.ignore();

    int count = 0;
    vector<Media*>::iterator it;
    
    auto start = vect.begin();
    while(it != vect.end())
    {
      it = start;
      while(it != vect.end())
      {
          if((*it)->getYear() == year)
          {
            (*it)->print();
            cout << "Delete this item? (y/n)\n";
            cin.getline(input, 80);
            if(strcmp(input, "y") == 0)
            {
              count++;
              start = it;
              delete *it;
              vect.erase(it);
              break;
            }
          }
          it++;
      }
      
    }
      cout << "Deleted " << count << " items\n";
  }
}
