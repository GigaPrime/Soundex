#pragma once
#include "gmock/gmock.h"
#include "Soundex.h"

int runAllTests(int argc, char** argv);

class SoundexTest : public testing::Test
{
public:
	std::unique_ptr<ISoundex> soundex = std::make_unique<Soundex>();
};
