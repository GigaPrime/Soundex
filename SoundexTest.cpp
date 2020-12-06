#include "SoundexTest.h"
using namespace testing;

int runAllTests(int argc, char** argv)
{
	InitGoogleMock(&argc, argv);

	return RUN_ALL_TESTS();
}

TEST_F(SoundexTest, encodeTest)
{
	ASSERT_THAT(soundex->encode("AbV"), Eq("A11"));
}
