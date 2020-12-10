#pragma once
#include "gmock/gmock.h"
#include "LettersRemover.h"

class LettersRemoverTest : public testing::Test
{
public:
	std::unique_ptr<ILettersRemover> lettersRemover = std::make_unique<LettersRemover>();
};