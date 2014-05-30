#ifndef THEATER_H_
#define THEATER_H_
#include "Movie.h"
using namespace std;

class Theater
{
private:
	string name;
	string phone;
	int hour;
	string Genre;
	float PopcornPrice;
	float CokePrice;
public:
	Theater(string Name, string Phone);

	void AddMovie(Movie& Movie);  
	string GetMovieForHour(int hour);  
	int GetShowTimeForGenre(string Genre);
	float GetPopcornPrice();
	float GetCokePrice();
};
#endif