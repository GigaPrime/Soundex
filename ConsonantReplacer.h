#pragma once
#include <string>
#include "gmock/gmock.h"
#include "AlgorythmGlobals.h"

class IConsonantReplacer
{
public:
	virtual const std::string replaceConsonants(const std::string& input) const = 0;
};

class ConsonantReplacer : public IConsonantReplacer
{
public:
	const std::string replaceConsonants(const std::string& input) const override final;

private:
	const std::string toLowerString(const std::string& input) const;
	const std::string findAndReplace(const std::string& input, const std::string& charsToReplace, const std::string& replacementChar) const;

	FRIEND_TEST(ConsonantReplacer, isStringLowercased);
};

