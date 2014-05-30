#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

Movie::Movie()
{
	string Title = "Godzilla";
	string Genre = "Action";
	int Showtime = 8;
}

Movie::Movie(string TitleGiven, string GenreGiven, int ShowtimeGiven)
{
	Title = TitleGiven;
	if (GenreGiven != "Action" && GenreGiven != "Comedy" && GenreGiven != "Horror" && GenreGiven != "Documentary")
	{
		Genre = "Comedy";
	}
	else
		Genre = GenreGiven;
	Showtime = ShowtimeGiven;
}

string Movie::GetTitle()
{
	return Title;
}

string Movie::GetGenre()
{
	return Genre;
}

int Movie::GetShowtime()
{
	return Showtime;
}