#include "Soundex.h"

const std::string Soundex::encode(const std::string& input) const
{
	std::string tmpStr = input;
	
	tmpStr = consonantReplacer->replaceConsonants(tmpStr);

	return tmpStr;
}

