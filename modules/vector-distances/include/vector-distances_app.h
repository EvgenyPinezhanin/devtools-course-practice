// Copyright 2022 Pinezhanin Evgeny

#ifndef MODULES_VECTOR_DISTANCES_INCLUDE_VECTOR_DISTANCES_APP_H_
#define MODULES_VECTOR_DISTANCES_INCLUDE_VECTOR_DISTANCES_APP_H_

#include <string>

class Application {
 public:
    Application();
    std::string operator()(int argc, const char** argv);
};

#endif  // MODULES_VECTOR_DISTANCES_INCLUDE_VECTOR_DISTANCES_APP_H_
