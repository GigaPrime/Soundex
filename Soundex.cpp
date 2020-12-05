#include "Soundex.h"

const std::string Soundex::encode(const std::string& input) const
{
	

	std::string tmpStr = input;
	return increaseStringToAlgorythmRequiredLength(tmpStr);
}


const std::string Soundex::increaseStringToAlgorythmRequiredLength(const std::string& input) const
{
	std::string tmpStr = input;

	for (int i = tmpStr.length(); i < SOUNDEX_ALGORYTHM::MIN_STR_LENGTH; i++)
	{
		tmpStr.push_back('0');
	}
	return tmpStr;
}
