#include "StrLengthShortener.h"
#include <iostream>

const std::string StrLengthShortener::shortenStrLength(const std::string& input) const
{
	std::string tmpStr = input;

	std::cout << "Str size is: " << tmpStr.size() << std::endl;
	
	if (tmpStr.size() > SOUNDEX_ALGORYTHM::MAX_STR_LENGTH)
		tmpStr.resize(SOUNDEX_ALGORYTHM::MAX_STR_LENGTH);

	std::cout << "Str size is: " << tmpStr.size() << std::endl;
	
	return tmpStr;
}
