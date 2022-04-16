// Copyright 2022 Pinezhanin Evgeny

#include "include/conways_life.h"

#include <vector>

void ConwaysLife::initGrid() {
    grid->resize(5);
    for (int i = 0; i < 5; i++) {
        (*grid)[i].resize(5, 0);
    }
}

ConwaysLife::ConwaysLife() : grid(new std::vector<std::vector<bool>>) {
    initGrid();
}

ConwaysLife::ConwaysLife(const ConwaysLife &cl) {
    // *grid = *(cl.grid);
}

void ConwaysLife::setGrid(const std::vector<std::vector<bool>> &_grid) {
    (*grid) = _grid;
}

std::vector<std::vector<bool>> ConwaysLife::getGrid() {
    return *grid;
}
