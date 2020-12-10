#pragma once
#include <string>

class IConsonantsIterativeNumbersRemover
{
public:
	virtual const std::string removeIterativeConsonants(const std::string& input) const = 0;
};

class ConsonantsIterativeNumbersRemover : public IConsonantsIterativeNumbersRemover
{
public:
	const const std::string removeIterativeConsonants(const std::string& input) const final override;
private:
	const bool areNumbers(const char& c1, const char& c2) const;
	const bool areNumbersEqual(const char& c1, const char& c2) const;
	const bool areIterativeNumbersEqual(const char& c1, const char& c2) const;
};
