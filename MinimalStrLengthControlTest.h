#pragma once
#include "gmock/gmock.h"
#include "MinimalStrLengthControl.h"

class MinimalStrLengthControlTest : public testing::Test
{
public:
	std::unique_ptr<IMinimalStrLengthControl> minimalStrLengthControl = std::make_unique<MinimalStrLengthControl>();
};