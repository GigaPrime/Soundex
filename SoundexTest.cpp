#include "SoundexTest.h"
using namespace testing;

int runAllTests(int argc, char** argv)
{
	InitGoogleMock(&argc, argv);

	return RUN_ALL_TESTS();
}

TEST_F(SoundexTest, EncodeRemovesConsonantsAmmonium)
{
	ASSERT_THAT(soundex->encode("ammonium"), Eq("A555"));
}

TEST_F(SoundexTest, EncodeRemovesConsonantsImplementation)
{
	ASSERT_THAT(soundex->encode("implementation"), Eq("I514"));
}

TEST_F(SoundexTest, EncodeRemovesConsonantsRobert)
{
	ASSERT_THAT(soundex->encode("Robert"), Eq("R163"));
}
TEST_F(SoundexTest, EncodeRemovesConsonantsRupert)
{
	ASSERT_THAT(soundex->encode("Rupert"), Eq("R163"));
}

TEST_F(SoundexTest, EncodeRemovesConsonantsRubin)
{
	ASSERT_THAT(soundex->encode("Rubin"), Eq("R150"));
}

TEST_F(SoundexTest, EncodeRemovesConsonantsAshcraft)
{
	ASSERT_THAT(soundex->encode("Ashcraft"), Eq("A261"));
}

TEST_F(SoundexTest, EncodeRemovesConsonantsAshcroft)
{
	ASSERT_THAT(soundex->encode("Ashcroft"), Eq("A261"));
}

TEST_F(SoundexTest, EncodeRemovesConsonantsTymczak)
{
	ASSERT_THAT(soundex->encode("Tymczak"), Eq("T522"));
}