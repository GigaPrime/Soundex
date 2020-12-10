#pragma once
#include <string>
#include "AlgorythmGlobals.h"

class IStrLengthShortener
{
public:
	virtual const std::string shortenStrLength(const std::string& input) const = 0;
};

class StrLengthShortener : public IStrLengthShortener
{
public:
	const std::string shortenStrLength(const std::string& input) const override final;
};
