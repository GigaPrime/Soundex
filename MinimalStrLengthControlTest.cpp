#include "MinimalStrLengthControlTest.h"
using namespace testing;

TEST_F(MinimalStrLengthControlTest, ProlongOneDigitStrToGetFourDigitLength)
{
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength("I"), Eq("I000"));
}

TEST_F(MinimalStrLengthControlTest, ProlongTwoDigitStrToGetFourDigitLength)
{
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength("Ab"), Eq("Ab00"));
}

TEST_F(MinimalStrLengthControlTest, ProlongThreeDigitStrToGetFourDigitLength)
{
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength("AbC"), Eq("AbC0"));
}

TEST_F(MinimalStrLengthControlTest, CheckIfFourDigitStringIsNotProlonged)
{
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength("AbCd"), Eq("AbCd"));
}
