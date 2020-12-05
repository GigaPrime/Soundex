#pragma once
#include<string>

#include "Soundex.h"

class IConsonantReplacer
{
public:
	virtual const std::string replaceConsonants(const std::string& input) const = 0;
};

class ConsonantReplacer : public IConsonantReplacer
{
public:
	const std::string replaceConsonants(const std::string& input) const override;

private:
	const std::string findAndReplace(const std::string& input, const std::string& charsToReplace, const char replacementChar) const;
};