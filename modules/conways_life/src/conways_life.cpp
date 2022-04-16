// Copyright 2022 Pinezhanin Evgeny

#include "include/conways_life.h"

#include <vector>

ConwaysLife::ConwaysLife() : grid(new std::vector<std::vector<bool>>) {}

ConwaysLife::ConwaysLife(const ConwaysLife &cl) {}

void ConwaysLife::setGrid(const std::vector<std::vector<bool>> &_grid) {}

std::vector<std::vector<bool>> ConwaysLife::getGrid() { return std::vector<std::vector<bool>>(); }

void newGen() {}
