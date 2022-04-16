// Copyright 2022 Pinezhanin Evgeny

#include <gtest/gtest.h>

#include <vector>
#include "include/conways_life.h"

TEST(conways_life, default_constructor) {
    ASSERT_NO_THROW(ConwaysLife life);
}

TEST(conways_life, get_default_grid) {
    ConwaysLife life;
    std::vector<std::vector<bool>> def_grid{ {0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0} };
    std::vector<std::vector<bool>> grid = life.getGrid();
    ASSERT_EQ(def_grid, grid);
}

TEST(conways_life, can_set_grid_and_get_grid) {
    ConwaysLife life;
    std::vector<std::vector<bool>> grid{ {0, 1, 0, 1, 0},
                                         {0, 0, 1, 0, 0},
                                         {0, 0, 0, 0, 1},
                                         {0, 1, 0, 0, 0},
                                         {0, 0, 0, 1, 0} };
    life.setGrid(grid);
    std::vector<std::vector<bool>> life_grid = life.getGrid();
    ASSERT_EQ(grid, life_grid);
}
