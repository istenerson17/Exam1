#ifndef MOVIE_H_
#define MOVIE_H_
using namespace std;

class Movie
{
private:
	string Title;
	string Genre;
	int Showtime;
public:
	Movie();
	Movie(string TitleGiven, string GenreGiven, int ShowTimeGiven);

	string GetTitle();
	string GetGenre(); 
	int GetShowtime(); 
};
#endif