#pragma once
#include <string>
#include <memory>

#include "ConsonantReplacer.h"

namespace SOUNDEX_ALGORYTHM
{
	const int MIN_STR_LENGTH = 4;
	const char NOT_ENOUGH_STR_LENGTH_CHAR = '0';
	const char REPLACE_WITH_1 = '1';
	const char REPLACE_WITH_2 = '2';
	const char REPLACE_WITH_3 = '3';
	const char REPLACE_WITH_4 = '4';
	const char REPLACE_WITH_5 = '5';
	const char REPLACE_WITH_6 = '6';
		
	const std::string CHARS_REPLACED_WITH_1 = "bfpv";
	const std::string CHARS_REPLACED_WITH_2 = "cgjkqsxz";
	const std::string CHARS_REPLACED_WITH_3 = "dt";
	const std::string CHARS_REPLACED_WITH_4 = "l";
	const std::string CHARS_REPLACED_WITH_5 = "mn";
	const std::string CHARS_REPLACED_WITH_6 = "r";
}

class ISoundex
{
public:
	virtual ~ISoundex() = 0 {}
	virtual const std::string encode(const std::string& input) const = 0;
	virtual const std::string increaseStringToAlgorythmRequiredLength(const std::string& input) const = 0;
};

class Soundex : public ISoundex
{
public:
	const std::string encode(const std::string& input) const override;
	const std::string increaseStringToAlgorythmRequiredLength(const std::string& input) const;

private:

};
