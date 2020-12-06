#include "ConsonantReplacerTest.h"
using namespace testing;

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitOne)
{
	// 'b' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ab"), Eq("A1"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ba"), Eq("1a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abb"), Eq("A11"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("bbA"), Eq("11a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("bAbbib"), Eq("1a11i1"));

	// 'f' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Af"), Eq("A1"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("fa"), Eq("1a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Aff"), Eq("A11"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ffA"), Eq("11a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("fAffif"), Eq("1a11i1"));

	// 'p' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ap"), Eq("A1"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("pa"), Eq("1a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("App"), Eq("A11"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ppA"), Eq("11a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("pAppip"), Eq("1a11i1"));

	// 'v' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Av"), Eq("A1"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("va"), Eq("1a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Avv"), Eq("A11"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("vvA"), Eq("11a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("vAvviv"), Eq("1a11i1"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitTwo)
{
	// 'c' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ac"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ca"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Acc"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ccA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("cAccic"), Eq("2a22i2"));

	// 'g' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ag"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ga"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Agg"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ggA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("gAggig"), Eq("2a22i2"));

	// 'j' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Aj"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ja"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ajj"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("jjA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("jAjjij"), Eq("2a22i2"));

	// 'k' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ak"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ka"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Akk"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("kkA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("kAkkik"), Eq("2a22i2"));

	// 'q' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Aq"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("qa"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Aqq"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("qqA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("qAqqiq"), Eq("2a22i2"));

	// 's' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("As"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("sa"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ass"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ssA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("sAssis"), Eq("2a22i2"));

	// 'x' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ax"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("xa"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Axx"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("xxA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("xAxxix"), Eq("2a22i2"));

	// 'z' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Az"), Eq("A2"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("za"), Eq("2a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Azz"), Eq("A22"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("zzA"), Eq("22a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("zAzziz"), Eq("2a22i2"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitOneAndTwo)
{
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abz"), Eq("A12"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("zbA"), Eq("21a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("zbAbz"), Eq("21a12"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abza"), Eq("A12a"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitThree)
{
	// 'd' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ad"), Eq("A3"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("da"), Eq("3a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Add"), Eq("A33"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ddA"), Eq("33a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("dAddid"), Eq("3a33i3"));

	// 't' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("At"), Eq("A3"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ta"), Eq("3a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Att"), Eq("A33"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ttA"), Eq("33a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("tAttit"), Eq("3a33i3"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitOneAndTwoAndTree)
{
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abzt"), Eq("A123"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("tzbA"), Eq("321a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("dzbAbzt"), Eq("321a123"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abztda"), Eq("A1233a"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitFour)
{
	// 'l' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Al"), Eq("A4"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("la"), Eq("4a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("All"), Eq("A44"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("llA"), Eq("44a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("lAllil"), Eq("4a44i4"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitOneAndTwoAndTreeAndFour)
{
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abztl"), Eq("A1234"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ltzbA"), Eq("4321a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ldzbAbztl"), Eq("4321a1234"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abztdlla"), Eq("A123344a"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitFive)
{
	// 'm' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Am"), Eq("A5"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ma"), Eq("5a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Amm"), Eq("A55"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("mmA"), Eq("55a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("mAmmim"), Eq("5a55i5"));

	// 'n' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("An"), Eq("A5"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("na"), Eq("5a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ann"), Eq("A55"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("nnA"), Eq("55a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("nAnnin"), Eq("5a55i5"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitOneAndTwoAndTreeAndFourAndFive)
{
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abztlm"), Eq("A12345"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("nltzbA"), Eq("54321a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("nldzbAbztln"), Eq("54321a12345"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abztdllnma"), Eq("A12334455a"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitSix)
{
	// 'r' replacement
	ASSERT_THAT(consonantReplacer->replaceConsonants("Ar"), Eq("A6"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("ra"), Eq("6a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Arr"), Eq("A66"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("rrA"), Eq("66a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("rArrir"), Eq("6a66i6"));
}

TEST_F(ConsonantReplacerTest, ReplaceConsonantsWithDigitOneAndTwoAndTreeAndFourFiveAndSix)
{
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abztlmr"), Eq("A123456"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("rnltzbA"), Eq("654321a"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("rnldzbAbztlnr"), Eq("654321a123456"));
	ASSERT_THAT(consonantReplacer->replaceConsonants("Abztdllnmrra"), Eq("A1233445566a"));
}

TEST(ConsonantReplacer, isStringLowercased)
{
	ConsonantReplacer consonantReplacer;
	ASSERT_THAT(consonantReplacer.toLowerStringExceptFirtsLetter("ABC"), Eq("Abc"));

}