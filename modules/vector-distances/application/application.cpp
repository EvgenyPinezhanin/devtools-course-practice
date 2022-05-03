// Copyright 2022 Pinezhanin Evgeny

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "include/vector-distances_app.h"

int main(int argc, const char** argv) {
    Application app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
