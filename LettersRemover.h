#pragma once
#include <string>
#include "AlgorythmGlobals.h"

class ILettersRemover
{
public:
	virtual  const std::string removeLettersFromStringString(const std::string& input, const std::string& lettersToRemove) const = 0;
};

class LettersRemover : public ILettersRemover
{
public:
	const std::string removeLettersFromStringString(const std::string& input, const std::string& charsToErase) const final override;
private:
	const static std::string toLowerString(const std::string& input);
	const static std::string removeLetters(const std::string& input, const std::string& charsToErase);
};
