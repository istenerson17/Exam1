#include <iostream>
#include "Theater.h"
#include "Movie.h"
using namespace std;

Theater::Theater(string Name, string Phone)
{
	name = Name;
	phone = Phone;
}

void Theater::AddMovie(Movie& Movie)
{
	string Title = Movie.GetTitle();
	string Genre = Movie.GetGenre();
	int Showtime = Movie.GetShowtime();
}

string Theater::GetMovieForHour(int hour)
{
	const int MOVIECOUNT = 11;
	int hourshowing;
	string upcomming, title;
	Movie movielisting[MOVIECOUNT];
	for (int m = 0; m < MOVIECOUNT; m++)
	{
		hourshowing = movielisting[m].GetShowtime();

		if (hour == hourshowing)
		{
			title = movielisting[hourshowing].GetTitle();
			upcomming = title;
			return upcomming;
		}
		else
		{
			upcomming = "";
			return upcomming;
		}
	}
}


int Theater::GetShowTimeForGenre(string Genre)
{
	const int MOVIECOUNT = 11;
	int hourshowing;
	string genre;
	Movie movielisting[MOVIECOUNT];
	for (int m = 0; m < MOVIECOUNT; m++)
	{
		hourshowing = movielisting[m].GetShowtime();
		if (genre == Genre)
		{
			return hourshowing;
		}
		else
			return -1;
	}
}

float Theater::GetPopcornPrice() //To make this be in dollars, I changed this to a float for a decimal.
{
	PopcornPrice = 8.50;
	return PopcornPrice;
}

float Theater::GetCokePrice() //I did the same for this one too.
{
	CokePrice = 6.75;
	return CokePrice;
}