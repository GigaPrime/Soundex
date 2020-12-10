#include "LettersRemoverTest.h"
using namespace testing;

TEST_F(LettersRemoverTest, removeSingleLetterAFromString)
{
	lettersRemover->removeLettersFromStringString("AbC", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
}

TEST_F(LettersRemoverTest, removeSingleLetterEFromString)
{
	lettersRemover->removeLettersFromStringString("bEC", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
}

TEST_F(LettersRemoverTest, removeSingleLetteriIFromString)
{
	lettersRemover->removeLettersFromStringString("biC", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
}

TEST_F(LettersRemoverTest, removeSingleLetterOFromString)
{
	lettersRemover->removeLettersFromStringString("bCO", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
}

TEST_F(LettersRemoverTest, removeSingleLetterUFromString)
{
	lettersRemover->removeLettersFromStringString("UbC", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
}

TEST_F(LettersRemoverTest, removeSingleLetterYFromString)
{
	lettersRemover->removeLettersFromStringString("bCY", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
}

TEST_F(LettersRemoverTest, removeSingleLetterHFromString)
{
	lettersRemover->removeLettersFromStringString("hbC", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_H_W), Eq("bc");
}

TEST_F(LettersRemoverTest, removeSingleLetterWFromString)
{
	lettersRemover->removeLettersFromStringString("bCW", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_H_W), Eq("bc123");
}

TEST_F(LettersRemoverTest, removeDifferentLettersCombinationsFromString)
{
	lettersRemover->removeLettersFromStringString("bEyiuC", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
	lettersRemover->removeLettersFromStringString("aAbEyoC", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_VOWELS), Eq("bc");
	lettersRemover->removeLettersFromStringString("bHhwhCW", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_H_W), Eq("bc");
	lettersRemover->removeLettersFromStringString("bHhCzzW", SOUNDEX_ALGORYTHM::CHARS_TO_ERASE_H_W), Eq("bczz");
}