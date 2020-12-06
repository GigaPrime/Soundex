#include "MinimalStrLengthControl.h"

const std::string MinimalStrLengthControl::increaseStringToAlgorythmRequiredLength(const std::string& input) const
{
	std::string tmpStr = input;

	for (int i = tmpStr.length(); i < SOUNDEX_ALGORYTHM::MIN_STR_LENGTH; i++)
	{
		tmpStr.push_back('0');
	}
	return tmpStr;
}
