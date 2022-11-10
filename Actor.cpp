#include "Actor.h"

using namespace std;

Actor::Actor()
{
    this->firstName = "";
    this->lastName = "";
    this-> birthYear = 0;

}

Actor::Actor(std::string fname, std::string lname, int birthyear)
{
    this->setFirstName(fname);
    this->setLastName(lname);
    this->setBirthYear(birthyear);
}

void Actor::setFirstName(std::string fName)
{
    this->firstName = fName;
}

std::string Actor::getFirstName()
{
    return this->firstName;
}

void Actor::setLastName(std::string lName)
{
    this->lastName = lName;
}

std::string Actor::getLastName()
{
    return this->lastName;
}

void Actor::setBirthYear(int year)
{
    this->birthYear = year;
}

int Actor::getBirthYear()
{
    return this->birthYear;
}