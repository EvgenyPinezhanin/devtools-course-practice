// Copyright 2022 Pinezhanin Evgeny

#include "include/conways_life.h"

#include <vector>

void ConwaysLife::initGrid() {
    grid->resize(5);
    for (int i = 0; i < 5; i++) {
        (*grid)[i].resize(5, 0);
    }
}

int ConwaysLife::numberLivingNeighbours(int x, int y, int width, int height) {
    int number = 0;
    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {
            if (i != x || j != y) {
                number += (*grid)[(j + height) % height][(i + width) % width];
            }
        }
    }
    return number;
}

ConwaysLife::ConwaysLife() : grid(new std::vector<std::vector<bool>>) {
    initGrid();
}

ConwaysLife::ConwaysLife(const ConwaysLife &cl)
    : grid(new std::vector<std::vector<bool>>) {
    *grid = *(cl.grid);
}

void ConwaysLife::setGrid(const std::vector<std::vector<bool>> &_grid) {
    if (_grid.size() < 3) {
        throw "Error! Height less three";
    }
    for (int i = 1; i < (int)_grid.size(); i++) {
        if (_grid[0].size() != _grid[i].size()) {
            throw "Error! Grid is not rectangle";
        }
    }
    if (_grid[0].size() < 3) {
        throw "Error! Width less three";
    }
    *grid = _grid;
}

std::vector<std::vector<bool>> ConwaysLife::getGrid() {
    return *grid;
}

void ConwaysLife::nextGen() {
    std::vector<std::vector<bool>> *tmp_grid =
        new std::vector<std::vector<bool>>(*grid);
    int height = grid->size(), width;
    if (height == 0) {
        width = 0;
    } else {
        width = (*grid)[0].size();
    }
    int liveNeighbours;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            liveNeighbours = numberLivingNeighbours(j, i, width, height);
            if (!(*grid)[i][j]) {
                if (liveNeighbours == 3) {
                    (*tmp_grid)[i][j] = true;
                }
            } else {
                if (liveNeighbours < 2 || liveNeighbours > 3) {
                    (*tmp_grid)[i][j] = false;
                }
            }
        }
    }
    *grid = *tmp_grid;
    delete tmp_grid;
}
