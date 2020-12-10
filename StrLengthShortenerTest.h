#pragma once
#include "gmock/gmock.h"
#include "StrLengthShortener.h"

class StrLengthShortenerTest : public testing::Test
{
public:
	std::unique_ptr<IStrLengthShortener> strLengthShortener = std::make_unique<StrLengthShortener>();
};