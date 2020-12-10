#include <iostream>
#include "Soundex.h"
#include "SoundexTest.h"

int main(int argc, char** argv)
{
	Soundex soundex;
	std::cout << soundex.encode("Rubin") << std::endl;

	return runAllTests(argc, argv);
}