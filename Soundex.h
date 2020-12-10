#pragma once
#include <string>
#include <memory>

#include "AlgorythmGlobals.h"
#include "ConsonantReplacer.h"
#include "LettersRemover.h"
#include "ConsonantsIterativeNumbersRemover.h"
#include "StrLengthShortener.h"
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
	mutable std::string storedString;
	std::unique_ptr<IMinimalStrLengthControl> minimalStrLengthControl = std::make_unique<MinimalStrLengthControl>();
	std::unique_ptr<IConsonantReplacer> consonantReplacer = std::make_unique<ConsonantReplacer>();
	std::unique_ptr<ILettersRemover> lettersRemover = std::make_unique<LettersRemover>();
	std::unique_ptr<IConsonantsIterativeNumbersRemover> consonantsIterativeNumbersRemover = std::make_unique<ConsonantsIterativeNumbersRemover>();
	std::unique_ptr<IStrLengthShortener> strLengthShortener = std::make_unique<StrLengthShortener>();
	const std::string saveFirstLetter(const std::string& input) const;
};
