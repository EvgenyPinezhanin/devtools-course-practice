// Copyright 2022 Pinezhanin Evgeny

#ifndef MODULES_CONWAYS_LIFE_INCLUDE_CONWAYS_LIFE_H_
#define MODULES_CONWAYS_LIFE_INCLUDE_CONWAYS_LIFE_H_

#include <vector>

using std::vector;

class ConwaysLife {
 private:
    vector<vector<bool>> *grid;

 public:
    ConwaysLife();
    ConwaysLife(const ConwaysLife &cl);

    void setGrid(const vector<vector<bool>> &_grid);
    vector<vector<bool>> getGrid();

    void newGen();
};

#endif  // MODULES_CONWAYS_LIFE_INCLUDE_CONWAYS_LIFE_H_
