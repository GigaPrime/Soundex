#pragma once
#include "gmock/gmock.h"
#include "ConsonantReplacer.h"

class ConsonantReplacerTest : public testing::Test
{
public:
	std::unique_ptr<IConsonantReplacer> consonantReplacer = std::make_unique<ConsonantReplacer>();
};
