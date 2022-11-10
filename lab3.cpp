#include "Movie.h"
#include "Movie.cpp"
#include "Actor.cpp"

using namespace std;

void test();

int main()
{
	cout << "Start testing\n" << endl;
	test();
	cout << "\nFinished testing" << endl;
	return 0;
}

void test()
{

	Movie a(152, 2008, 5, 14.99, "The Dark Knight");
	a.addActor("Christian", "Bale", 1974);
	a.addActor("Heath", "Heath Ledger", 1979);
	a.addActor("Aaron", "Eckhart", 1968);
	a.addActor("Michael", "Caine", 1933);
	a.addActor("Maggie", "Gyellenhall", 1977);
	std::cout << a.actors << std::endl;
	a.printMovieInfo();
}