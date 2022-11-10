#include "Movie.h"

using namespace std;
Movie::Movie() {
    this->setMovieTime(0);
    this->setMovieYearOut(0);
    this->setNumberOfActors(0);
    this->setMoviePrice(0.0);
    this->setMovieTitle("");
    this->actorArrayIndex = 0;
    //this->actors = new Actor[0];


    /*this->movieTime = 0;
	this->movieYearOut = 0;
	this->numberOfActors = 0;
	this->actorArrayIndex = 0;
	this->moviePrice = 0.0;
	this->movieTitle = "";
    this->actors = new Actor[this->numberOfActors];*/
}

Movie::Movie(int time, int yearOut, int actors1, double price, std::string title) {
    this->setMovieTime(time);
    this->setMovieYearOut(yearOut);
    this->setNumberOfActors(actors1);
    this->setMoviePrice(price);
    this->setMovieTitle(title);
    this->actorArrayIndex = 0;
    //this->actors = new Actor[actors1];
}

Movie::Movie(const Movie &m) {
    this->movieTime = m.movieTime;
    this->movieYearOut = m.movieYearOut;
    this->numberOfActors = m.numberOfActors;
    this->actorArrayIndex = m.actorArrayIndex;
    this->moviePrice = m.moviePrice;
    this->movieTitle = m.movieTitle;
    this->actors = new Actor[m.numberOfActors];
    for(int i = 0; i<m.numberOfActors; i++)
    {
        this->actors[i] = m.actors[i];
    }

}

Movie:: ~Movie()
{   
    delete[] actors;
    //delete[] this;
    
}

void Movie::setMovieTime(int time)
{
    this->movieTime = time;
}

int Movie::getMovieTime()
{
    return this->movieTime;
}

void Movie::setMovieYearOut(int yearOut)
{
    this->movieYearOut = yearOut;
}

int Movie::getMovieYearOut()
{
    return this->movieYearOut;
}

void Movie::setNumberOfActors(int numActors)
{
    this->numberOfActors = numActors;
    this->actors = new Actor[numActors];
}

int Movie::getNumberOfActors()
{
    return this->numberOfActors;
}

void Movie::addActor(std::string firstName, std::string lastName, int yearBirth)
{
    Actor a = Actor(firstName, lastName, yearBirth);
    this->actors[this->actorArrayIndex] = a;
    this->actorArrayIndex = this->actorArrayIndex + 1;
}

void Movie::setMoviePrice(double price)
{
    this->moviePrice = price;
}

double Movie::getMoviePrice()
{
    return this->moviePrice;
}

void Movie::setMovieTitle(std::string title)
{
    this->movieTitle = title;
}

std::string Movie::getMovieTitle()
{
    return this->movieTitle;
}


void Movie::printMovieInfo()
{
    std::cout << "Title: " << this->movieTitle << ", Published in: " << this->movieYearOut << std::endl;
    std::cout << "Duration of Movie: " << this->movieTime << " minutes" << std::endl;
    std::cout << "Price: $" << this->moviePrice << std::endl;
    std::cout << "Actors:" << std::endl;
    for(int i = 0; i<this->numberOfActors; i++)
    {
        std::cout << this->actors[i].getFirstName() << " " << this->actors[i].getLastName() << ", " << this->actors[i].getBirthYear() << std::endl;
    }
}