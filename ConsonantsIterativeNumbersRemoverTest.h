#pragma once
#include "gmock/gmock.h"
#include "ConsonantsIterativeNumbersRemover.h"

class ConsonantsIterativeNumbersRemoverTest : public testing::Test
{
public:
	std::unique_ptr<IConsonantsIterativeNumbersRemover> iterativeConsonantsRemover = std::make_unique<ConsonantsIterativeNumbersRemover>();
};