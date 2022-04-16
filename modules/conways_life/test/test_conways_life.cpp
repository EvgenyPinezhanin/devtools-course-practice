// Copyright 2022 Pinezhanin Evgeny

#include <gtest/gtest.h>

#include "include/conways_life.h"

TEST(conways_life, default_constructor) {
    ASSERT_NO_THROW(ConwaysLife life);
}
