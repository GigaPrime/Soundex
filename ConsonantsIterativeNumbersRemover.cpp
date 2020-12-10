#include "ConsonantsIterativeNumbersRemover.h"

const std::string ConsonantsIterativeNumbersRemover::removeIterativeConsonants(const std::string& input) const
{
    std::string tmpStr = input;
    for (int i = 0; i < tmpStr.length(); i++)
    {
        if (areIterativeNumbersEqual(tmpStr[i], tmpStr[i + 1]))
        {
            tmpStr.erase(i + 1, 1);
            i--;
        }
    }

    return tmpStr;
}

const bool ConsonantsIterativeNumbersRemover::areNumbers(const char& c1, const char& c2) const
{
    return (isdigit(c1) && isdigit(c2) ? true : false);
}

const bool ConsonantsIterativeNumbersRemover::areNumbersEqual(const char& c1, const char& c2) const
{
    return c1 == c2 ? true : false;
}

const bool ConsonantsIterativeNumbersRemover::areIterativeNumbersEqual(const char& c1, const char& c2) const
{
    return areNumbers(c1, c2) && areNumbersEqual(c1, c2) ? true : false;
}
