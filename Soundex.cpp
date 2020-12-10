#include "Soundex.h"

const std::string Soundex::encode(const std::string& input) const
{
	std::string tmpStr = input;
	tmpStr = saveFirstLetter(input);
	tmpStr.erase(0, 1);
	tmpStr = lettersRemover->removeLettersFromStringString(tmpStr, SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_H_W);
	tmpStr = consonantReplacer->replaceConsonants(tmpStr);
	tmpStr = consonantsIterativeNumbersRemover->removeIterativeConsonants(tmpStr);
	tmpStr = lettersRemover->removeLettersFromStringString(tmpStr, SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS);
	storedString += tmpStr;
	storedString = strLengthShortener->shortenStrLength(storedString);
	storedString = minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(storedString);

	return storedString;
}

const std::string Soundex::saveFirstLetter(const std::string& input) const
{
	std::string tmpStr = input;
	tmpStr.operator[](0) = toupper(tmpStr[0]);
	storedString = tmpStr[0];
	return tmpStr;
}

//at() instead of operator[]

// exception safety