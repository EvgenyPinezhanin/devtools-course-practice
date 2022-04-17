// Copyright 2022 Pinezhanin Evgeny

#ifndef MODULES_CONWAYS_LIFE_INCLUDE_CONWAYS_LIFE_H_
#define MODULES_CONWAYS_LIFE_INCLUDE_CONWAYS_LIFE_H_

#include <vector>

class ConwaysLife {
 private:
    std::vector<std::vector<bool>> *grid;

    void initGrid();
    int numberLivingNeighbours(int x, int y, int width, int height);

 public:
    ConwaysLife();
    ConwaysLife(const ConwaysLife &cl);

    void setGrid(const std::vector<std::vector<bool>> &_grid);
    std::vector<std::vector<bool>> getGrid();

    void nextGen();
};

#endif  // MODULES_CONWAYS_LIFE_INCLUDE_CONWAYS_LIFE_H_
