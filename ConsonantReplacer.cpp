#include "ConsonantReplacer.h"

const std::string ConsonantReplacer::replaceConsonants(const std::string& input) const
{
	std::string tmpStr = input;

	tmpStr = findAndReplace(tmpStr, SOUNDEX_ALGORYTHM::CHARS_REPLACED_WITH_1, SOUNDEX_ALGORYTHM::REPLACE_WITH_1);
	tmpStr = findAndReplace(tmpStr, SOUNDEX_ALGORYTHM::CHARS_REPLACED_WITH_2, SOUNDEX_ALGORYTHM::REPLACE_WITH_2);
	tmpStr = findAndReplace(tmpStr, SOUNDEX_ALGORYTHM::CHARS_REPLACED_WITH_3, SOUNDEX_ALGORYTHM::REPLACE_WITH_3);
	tmpStr = findAndReplace(tmpStr, SOUNDEX_ALGORYTHM::CHARS_REPLACED_WITH_4, SOUNDEX_ALGORYTHM::REPLACE_WITH_4);
	tmpStr = findAndReplace(tmpStr, SOUNDEX_ALGORYTHM::CHARS_REPLACED_WITH_5, SOUNDEX_ALGORYTHM::REPLACE_WITH_5);
	tmpStr = findAndReplace(tmpStr, SOUNDEX_ALGORYTHM::CHARS_REPLACED_WITH_6, SOUNDEX_ALGORYTHM::REPLACE_WITH_6);

	return tmpStr;
}

const std::string ConsonantReplacer::toLowerStringExceptFirtsLetter(const std::string& input) const
{
	std::string tmpStr = input;

	for (int i = 1; i < tmpStr.length(); i++)
	{
		tmpStr.operator[](i) = tolower(tmpStr[i]);
	}
	return tmpStr;
}

const std::string ConsonantReplacer::findAndReplace(const std::string& input, const std::string& charsToReplace, const char replacemetChar) const
{
	std::string tmpStr = input;
	int charIndex = std::string::npos;
	
	tmpStr = toLowerStringExceptFirtsLetter(tmpStr);

	for (int i = 0; i < charsToReplace.length(); i++)
	{
		charIndex = tmpStr.find(charsToReplace[i]);

		if (charIndex != std::string::npos)
		{
			tmpStr.replace(charIndex, 1, &replacemetChar);
			i--;
		}
	}

	return tmpStr;
}
