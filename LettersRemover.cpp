#include "LettersRemover.h"

const std::string LettersRemover::removeLettersFromStringString(const std::string& input, const std::string& charsToErase) const
{
	std::string tmpStr = input;
	tmpStr = toLowerString(tmpStr);
	tmpStr = removeLetters(tmpStr, charsToErase);

	return tmpStr;
}

const std::string LettersRemover::toLowerString(const std::string& input)
{
	std::string tmpStr = input;

	for (int i = 0; i < tmpStr.length(); i++)
	{
		tmpStr.operator[](i) = tolower(tmpStr[i]);
	}
	return tmpStr;
}

const std::string LettersRemover::removeLetters(const std::string& input, const std::string& charsToErase)
{
	std::string tmpStr = input;
	int charIndex = std::string::npos;

	tmpStr = toLowerString(tmpStr);

	for (int i = 0; i < charsToErase.length(); i++)
	{
		charIndex = tmpStr.find(charsToErase[i]);

		if (charIndex != std::string::npos)
		{
			tmpStr.erase(charIndex, 1);
			i--;
		}
	}

	return tmpStr;
}
