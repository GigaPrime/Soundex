#pragma once
#include <string>
#include "AlgorythmGlobals.h"

class IMinimalStrLengthControl
{
public:
	virtual const std::string increaseStringToAlgorythmRequiredLength(const std::string& input) const = 0;
};

class MinimalStrLengthControl : public IMinimalStrLengthControl
{
public:
	const std::string increaseStringToAlgorythmRequiredLength(const std::string& input) const override final;
};