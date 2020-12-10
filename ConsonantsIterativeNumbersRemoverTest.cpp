#include "ConsonantsIterativeNumbersRemoverTest.h"
using namespace testing;

TEST_F(ConsonantsIterativeNumbersRemoverTest, RemovePairOfIterativeConsonantNumbers)
{
	ASSERT_THAT(iterativeConsonantsRemover->removeIterativeConsonants("A11"), Eq("A1"));
}

TEST_F(ConsonantsIterativeNumbersRemoverTest, RemoveTripleIterativeConsonantNumbers)
{
	ASSERT_THAT(iterativeConsonantsRemover->removeIterativeConsonants("A111"), Eq("A1"));
}

TEST_F(ConsonantsIterativeNumbersRemoverTest, CheckIfNonIterativeNumbersAreNotdeleted)
{
	ASSERT_THAT(iterativeConsonantsRemover->removeIterativeConsonants("A12"), Eq("A12"));
}

TEST_F(ConsonantsIterativeNumbersRemoverTest, CheckIfIterativePairsRemovedCorrectlyIfSeparatedByChar)
{
	ASSERT_THAT(iterativeConsonantsRemover->removeIterativeConsonants("A11d33"), Eq("A1d3"));
}

TEST_F(ConsonantsIterativeNumbersRemoverTest, CheckIfIterativePairsRemovedCorrectlyIfSeparatedByDigit)
{
	ASSERT_THAT(iterativeConsonantsRemover->removeIterativeConsonants("A11233"), Eq("A123"));
}

