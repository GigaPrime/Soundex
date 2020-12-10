#include "StrLengthShortenerTest.h"
using namespace testing;

TEST_F(StrLengthShortenerTest, ShortenStrToFourCharsLength)
{
	EXPECT_EQ(strLengthShortener->shortenStrLength("Adcdsfregtrf").length(), 4);
}

TEST_F(StrLengthShortenerTest, DoNotShortenStrIfLengthIsEqualToFour)
{
	EXPECT_EQ(strLengthShortener->shortenStrLength("Abcd").length(), 4);
}

TEST_F(StrLengthShortenerTest, DoNotShortenStrIfLengthIsLesThanFour)
{
	EXPECT_EQ(strLengthShortener->shortenStrLength("Ab"), "Ab");
}