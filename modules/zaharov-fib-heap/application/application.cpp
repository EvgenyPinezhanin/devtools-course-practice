// Copyright 2022 Zaharov Anton

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "include/heap_application.h"

int main(int argc, const char** argv) {
    HeapApplication app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
