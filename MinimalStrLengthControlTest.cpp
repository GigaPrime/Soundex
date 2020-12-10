#include "MinimalStrLengthControlTest.h"
using namespace testing;

TEST_F(MinimalStrLengthControlTest, ProlongZeroDigitStrToGetFourDCharLength)
{
	std::string str = "";
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str), Eq(str + "0000"));
	ASSERT_EQ(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str).size(), 4);
}

TEST_F(MinimalStrLengthControlTest, ProlongOneDigitStrToGetFourCharLength)
{
	std::string str = "I";
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str), Eq(str + "000"));
	ASSERT_EQ(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str).size(), 4);
}

TEST_F(MinimalStrLengthControlTest, ProlongTwoDigitStrToGetFourCharLength)
{
	std::string str = "Ab";
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str), Eq(str + "00"));
	ASSERT_EQ(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str).size(), 4);
}

TEST_F(MinimalStrLengthControlTest, ProlongThreeDigitStrToGetFourCharLength)
{
	std::string str = "AbC";
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str), Eq(str + "0"));
	ASSERT_EQ(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str).size(), 4);
}

TEST_F(MinimalStrLengthControlTest, DoNotProlongtFourCharLengthStr)
{
	std::string str = "Abcd";
	ASSERT_THAT(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str), Eq(str));
	ASSERT_EQ(minimalStrLengthControl->increaseStringToAlgorythmRequiredLength(str).size(), 4);
}
