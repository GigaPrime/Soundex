#pragma once
#include <string>
#include <memory>

#include "AlgorythmGlobals.h"
#include "ConsonantReplacer.h"
#include "MinimalStrLengthControl.h"

class ISoundex
{
public:
	virtual const std::string encode(const std::string& input) const = 0;
};

class Soundex : public ISoundex
{
public:
	const std::string encode(const std::string& input) const override final;

private:
	std::unique_ptr<IMinimalStrLengthControl> minimalStrLengthControl = std::make_unique<MinimalStrLengthControl>();
	std::unique_ptr<IConsonantReplacer> consonantReplacer = std::make_unique<ConsonantReplacer>();
};
