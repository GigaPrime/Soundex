#include "MinimalStrLengthControl.h"

const std::string MinimalStrLengthControl::increaseStringToAlgorythmRequiredLength(const std::string& input) const
{
	std::string tmpStr = input;

	for (int i = tmpStr.size(); i < SOUNDEX_ALGORYTHM::MAX_STR_LENGTH; i++)
	{
		tmpStr.push_back('0');
	}
	
	return tmpStr;
}
